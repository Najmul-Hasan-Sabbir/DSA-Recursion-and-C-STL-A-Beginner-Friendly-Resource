/*

Link:

*/

#include<bits/stdc++.h>
using namespace std;

const int N=1e6;

vector<int>g[N];
bool visited[N];

void DFS(int u){

visited[u]=true;
for(auto v: g[u]){

    if(!visited [v]){

        DFS(v);
    }
}

}


int main(){
int n,m; cin>>n>>m;
while(m--){

    int u,v; cin>>u>>v;

    g[u].push_back(v);
    g[v].push_back(u);

}


int ans=0;
for(int i=1; i<=n; i++){

    if(!visited[i]){

        DFS(i);
        ans++;
    }
}

cout<< "Nums of components =" << ans<< '\n';
return 0;
}
