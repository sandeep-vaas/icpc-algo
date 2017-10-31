#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b)
{
	if(a%b==0) return a;
	else{
	int y=(a/b);
	y++;
	while(1)
	{
		if((b*y)%a==0) break;
		y++;
	}
	return (b*y);
}
}
int main()
{
	int n;
	cin>>n;
	int l;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	l=a[0];
	for(int i=1;i<n;i++)
	{
		if(l>a[i]) l=lcm(l,a[i]);
		else l=lcm(a[i],l);
	}
	cout<<l;
}
