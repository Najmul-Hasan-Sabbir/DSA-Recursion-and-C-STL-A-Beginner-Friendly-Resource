/*

problem:  A graph is given find out if its bipartite or not??


This code checks if a graph is bipartite using DFS and 2-coloring.

Algo steps:
A graph is bipartite if:
1. You can color all nodes using 2 colors (say, 0 and 1),
2. And no two connected nodes share the same color.

In other words, all edges must connect nodes of different colors.

*/

#include<bits/stdc++.h>
using namespace std;

const int N=1e6;
vector<int>g[N];
bool visited[N];
int color[N];
bool okay;

void DFS(int u){

visited[u]=true;

for(auto v: g[u]){
    visited[u]=true;

    if(!visited[v]){

        color[v]=color[u]^1;
        DFS(v);
    }

    else{


        if(color[v]== color[u]){

            okay=false;
        }
    }

}

}



int32_t main(){

int n,m; cin>>n>>m;
while(m--){


    int u,v; cin>>u>>v;

    g[u].push_back(v);
    g[v].push_back(u);

}
okay=true;

for(int i=1; i<=n; i++){

    if(!visited[i]){

        color[i]=0;
        DFS(i);
    }
}


if(okay){

    cout<< "Yes the graph is Bipartite "<< '\n';
}
else{
    cout<<" No, the graph is not bipartite"<< '\n';
}
return 0;
}
