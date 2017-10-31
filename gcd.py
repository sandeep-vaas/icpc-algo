#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
int c;
    while(b!=0)
    {c=b;
     b=a%b;//b now stores a value of (a%b)
     a=c;//a now stores the value of previous b
    }
    return c;
}
int main(){
int n,g;//n stores the total number of numbers and g will finaly give the gcd of the numbers
cin>>n;
int a[n];
    for(int i=0;i<n;i++){
cin>>a[i];
    }
    g=a[0];
    for(int i=1;i<n;i++)
    {if(a[i]>g)
     {g=gcd(a[i],g);
     }
     else
     {
         g=gcd(g,a[i]);
     }
    }
    cout<<g;
}


     
        
