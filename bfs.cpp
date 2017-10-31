#include <bits/stdc++.h>
using namespace std;

queue<int> qe;
void bfsfunc(list<int>adj[], vector<bool>visted, int s)
{
	visted[s] = true;
	qe.push(s);
	list<int>::iterator it;
	while(!qe.empty())
	{
		int hd = qe.front();
		qe.pop();
		cout << hd << " ";
		for(it=adj[hd].begin();it!=adj[hd].end();it++)
		{
			if(!visted[*it])
			{
				visted[*it] = true;
				qe.push(*it);
			}
		}
	}
}

int main()
{
	list<int> *adj;
	int n,m,i,j,s;
	cin >> n >> m >> s;
	adj = new list<int>[n];
	while(m--)
	{
		int a,b,s;
		cin >> a >> b;
		adj[a].push_back(b);
	}
	vector<bool> visted(n, false);
	bfsfunc(adj,visted,s);
	cout << endl;
	return 0;
}