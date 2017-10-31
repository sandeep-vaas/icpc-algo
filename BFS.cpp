#include <bits/stdc++.h>

using namespace std;

const int oo = 0x3f3f3f3f; // A good 'infinity'
const int maxn = 1e6;

typedef pair<int, int> ii;
int dist[maxn];      	// A boolean array to mark visited nodes
vector<int> adj[maxn];	// Adjacency List representation

void addEdge(int a, int b) {adj[a].push_back(b), adj[b].push_back(a);}

void BFS(int idx, int d = 0) {
	memset(dist, 0x3f, sizeof dist);
	dist[idx] = 0;
	queue<ii> next;
	next.push(ii(d, idx));
	while(!next.empty()) {
		idx = next.front().second;
		d = next.front().first+1;
		next.pop();
		for(auto u : adj[idx]) {
			if(d < dist[u]) {
				dist[u] = d;
				next.push(ii(d, u));
			}
		}
	}
}

main() {
	ios::sync_with_stdio(0), cin.tie(0);
	int vertex, edges;
	cin >> vertex >> edges;
	for(int i = 0; i < edges; i++) {
		int a, b; cin >> a >> b;
		addEdge(a, b);
	}
	int x, y;
	cin >> x >> y; // An application of DFS:
	BFS(x);        // Obtaining the shortest path between two vertices without weight in the edges
	cout << "Distance: " << dist[y] << endl;
}
