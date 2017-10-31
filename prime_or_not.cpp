#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,flg=0;
	cin >> n;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			flg=-1;
			break;
		}
	}
	if(flg==0)
		cout << "Is a Prime" << endl;
	else
		cout << "Is not a Prime" << endl;
	return 0;
}