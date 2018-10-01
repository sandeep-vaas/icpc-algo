#include<iostream.h>
#include<conio.h>
#include<process.h>

class node
{
	int data;
	node *next;
	friend class sll;

public:	node()
	{
		data=0;
		next = NULL;
	}

	node(int d,node *n=0)
	{
		data=d;
		next=n;
	}

};

class sll
{
private: node *start,*end;

public:
	sll()
	{
		start = NULL;
		end = NULL;
	}

	sll(node *s,node *e)
	{
		start = s;
		end=e;
	}

	void insert_start(int d)
	{
		if(start==NULL)
		{
			start=new node(d,start);
			end=start;
		}
		else
		{
			start=new node(d,start);
		}
	}

	void insert_end(int d)
	{
		if(end==NULL)
		{
			start=new node(d);
			end=start;
		}

		else
		{
			end->next=new node(d);
			end=end->next;
		}
	}

	void insert_after(int num,int after)
	{
		if(start==end)
		{
			if(start==NULL)
			{
				cout<<"Underflow";
				return;
			}
			else
			{
				start->next=new node(num);
				end=start->next;
			}
		}
		else
		{
			node *temp;
			temp=start;
			while(temp->data!=after)
			{
				temp=temp->next;
			}
			temp->next=new node(num,temp->next);
			cout<<"Successfuly inserted";
			getch();

		}
	}

	void del_start()
	{
		if(start==NULL && end==NULL)
		{
			cout<<"underflow";
			getch();
		}
		else
		{
			node *temp;
			temp=start;
			start=start->next;
			delete temp;
			if(start==NULL)
			{
				end=NULL;
			}
			cout<<"Successfully deleted";
			getch();
		}
	}

	void del_end()
	{
		node *temp;
		if(start==NULL && end==NULL)
		{
			cout<<"Empty list";
		}
		else
		{
			temp=start;
			while(temp->next!=end)
			{
				temp=temp->next;
			}
			temp->next=end->next;
			delete end;
			end=temp;
			if(end==NULL)
			{
				start==NULL;
			}
			cout<<"Successfully deleted";
			getch();
		}
	}

	void del_particular(int d)
	{
		if(start==end)
		{
			if(start==NULL)
			{
				cout<<"Empty list";
			}
			else
			{
				delete start;
				start=NULL;
				end=NULL;
			}
		}
		else
		{

			node *temp1,*temp2;
			temp1=start;
			temp2=start->next;
			if(temp1->data==d)
			{
				start=start->next;
				delete temp1;
				cout<<"Number deleted";
				getch();
				return;
			}
			else
			{
			while(temp2->data!=d)
			{
				temp1=temp1->next;
				temp2=temp2->next;
				if(temp2==NULL)
				{
					cout<<"Number not found ";
					getch();
					return;
				}
			}
			temp1->next=temp2->next;
			delete temp2;
			cout<<"Number deleted";
			getch();
			}
		}
	}


	void output()
	{
		if(start==NULL)
		{
			cout<<"Underflow";
			getch();
			return;
		}
		node *temp;
		temp=start;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		getch();
	}

	~sll()
	{
		node *temp;
		while(start!=NULL)
		{
			temp=start->next;
			delete start;
			start=temp;
		}
	}
};



void main()
{
clrscr();
int num,choice,num1,num2;
sll s;
do{
	clrscr();
	cout<<"           MENU";
	cout<<"\n\n1. Insert at the beginning";
	cout<<"\n2. Insert at the end";
	cout<<"\n3. Delete at the beginning";
	cout<<"\n4. Delete at the end";
	cout<<"\n5. Insert after value";
	cout<<"\n6. Delete particular number";
	cout<<"\n7. Output";
	cout<<"\n8. Exit";
	cout<<"\n\nEnter your choice:";
	cin>>choice;
	switch(choice)
	{
		case 1:	cout<<"Enter a number:";
			cin>>num;
			s.insert_start(num);
			break;

		case 2:	cout<<"Enter a nummber:";
			cin>>num;
			s.insert_end(num);
			break;

		case 3:	s.del_start();
			break;

		case 4:	s.del_end();
			break;

		case 7:	s.output();
			break;

		case 8: cout<<"Exitting of program";
			getch();
			exit(0);

		case 5:	cout<<"Enter a number do you wanted to insert:";
			cin>>num1;
			cout<<"after which number:";
			cin>>num2;
			s.insert_after(num1,num2);
			break;

		case 6:	cout<<"Enter a number to be deleted:";
			cin>>num;
			s.del_particular(num);
			break;

		default:cout<<"Wrong choice entered";
			getch();
	}

}
while(1);

getch();

}
