#include <vector>
#include <queue>
#include <iostream>

void BFS(int n, int start_point, std::vector<int> adj[n]) {
  std::vector<bool> viz(n);
  std::queue<int> q;

  q.push(start_point);
  viz[start_point] = true;

  do {
    int node = q.front();
    q.pop();

    // *insert whatever you need to do with this node*
    std::cout << node << ' ';

    for (int new_node : adj[node])
      if (!viz[new_node]) {
        q.push(new_node);
        viz[new_node] = true;
      }
  } while (!q.empty());
}


int main() {
  int n, start_point;
  std::cin >> n >> start_point;

  std::vector<int> adj[n];
  int a, b;

  while (std::cin >> a >> b) {
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  BFS(n, start_point, adj);

  return 0;
}
