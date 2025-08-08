/*

Link:
Problem: Given an undirected unweighted graph with,  n nodes find the shortest path from 1 to n??

*/


#include <bits/stdc++.h>
using namespace std;

const int N = 1e6;
vector<int> g[N];
bool visited[N];
int dis[N];

int main() {
    int n, m;
    cin >> n >> m;

    // Read edges
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u); // Undirected
    }

    // BFS from node 1
    queue<int> q;
    q.push(1);
    visited[1] = true;
    dis[1] = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (auto v : g[u]) {
            if (!visited[v]) {
                visited[v] = true;
                dis[v] = dis[u] + 1;
                q.push(v);
            }
        }
    }

    // Print distances from node 1
    for (int i = 1; i <= n; i++) {
        if (visited[i]) {
            cout << "Distance from 1 to " << i << " = " << dis[i] << '\n';
        } else {
            cout << "Node " << i << " is not reachable from node 1\n";
        }
    }

    return 0;
}
