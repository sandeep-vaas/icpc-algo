#include <bits/stdc++.h>
using namespace std;

#define maxn 10005;

bool visited[maxn];
vector<int> adj[maxn];

void dfs(int x){
	if(!visited[x]){
		visited[x]=1;
		for(a:adj[x]){
			if(!visited[a]){
				dfs(a);
			}
		}
	}
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
		vis[i]=0;
	}
	dfs(0);
	
}
//khali t-shirt ke liye aaye hain
