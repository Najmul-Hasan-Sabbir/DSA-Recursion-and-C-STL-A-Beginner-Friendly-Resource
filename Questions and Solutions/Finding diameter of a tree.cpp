/*




*/
#include <bits/stdc++.h>
using namespace std;

const int MAX_NODES = 1e5 + 9;
vector<int> adjacencyList[MAX_NODES];
int depth[MAX_NODES];
int maxDepth = 0;
int farthestNode = 0;
int diameter = 0;

// First DFS to find the farthest node from node 1
void findFarthestNode(int currentNode, int parent) {
    depth[currentNode] = depth[parent] + 1;

    if (depth[currentNode] > maxDepth) {
        maxDepth = depth[currentNode];
        farthestNode = currentNode;
    }

    for (auto neighbor : adjacencyList[currentNode]) {
        if (neighbor != parent) {
            findFarthestNode(neighbor, currentNode);
        }
    }
}

// Second DFS to calculate the diameter starting from farthestNode
void calculateDiameter(int currentNode, int parent) {
    depth[currentNode] = depth[parent] + 1;
    diameter = max(diameter, depth[currentNode] - 1);

    for (auto neighbor : adjacencyList[currentNode]) {
        if (neighbor != parent) {
            calculateDiameter(neighbor, currentNode);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int totalNodes;
    cin >> totalNodes;

    for (int i = 1; i < totalNodes; i++) {
        int u, v;
        cin >> u >> v;
        adjacencyList[u].push_back(v);
        adjacencyList[v].push_back(u);
    }

    // Step 1: Find the farthest node from node 1
    findFarthestNode(1, 0);

    // Reset depth array and maxDepth for second DFS
    fill(depth, depth + MAX_NODES, 0);
    maxDepth = 0;

    // Step 2: Start DFS from the farthest node to calculate diameter
    calculateDiameter(farthestNode, 0);

    cout << "Diameter of the tree: " << diameter << '\n';

    return 0;
}
