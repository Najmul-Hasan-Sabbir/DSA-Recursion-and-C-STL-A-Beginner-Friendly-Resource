/*

This is a base code for finding cycles in Graphs,

*/
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
vector<int> g[N];
int col[N];
bool cycle;

void dfs(int u) {
    col[u] = 1;
    for (auto v : g[u]) {
        if (col[v] == 0) dfs(v);
        else if (col[v] == 1) {
            cycle = true;
        }
    }
    col[u] = 2;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
    }
    cycle = false;
    dfs(1);


    if(cycle){

        cout<< "Found a cycle" << '\n';
    }
    else{
         cout<< "No cycle found" << '\n';
    }
    return 0;
}
