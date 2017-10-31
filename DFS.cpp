#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e6;

bool memo[maxn];      	// A boolean array to mark visited nodes
vector<int> adj[maxn];	// Adjacency List representation

void addEdge(int a, int b) {adj[a].push_back(b), adj[b].push_back(a);}

void DFS(int idx) {
	memo[idx] = true;
	for(auto& u : adj[idx]) {
		if(!memo[u]) {
			DFS(u);
		}
	}
}

main() {
	ios::sync_with_stdio(0), cin.tie(0);
	int vertex, edges, subgraphs = 0;
	cin >> vertex >> edges;
	for(int i = 0; i < edges; i++) {
		int a, b; cin >> a >> b;
		addEdge(a, b);
	}
	for(int i = 0; i < vertex; i++) {
		if(!memo[i]) {++subgraphs; DFS(i);} // An application of DFS:
	}                                           // Seeing how many non-connected subgraphs we have
	cout << "Subgraphs: " << subgraphs << endl;
}
