
/*

Link: https://codeforces.com/problemset/problem/580/C
Time: O(N)
space: O(N)


*/

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+9;

vector<int>g[N];
int cat[N], consicutive_cat[N];
int m, ans;

void DFS(int u, int parent){

if(cat[u]){

    consicutive_cat[u]=consicutive_cat[parent]+1;
}
else{
    consicutive_cat[u]=0;
}
if(consicutive_cat[u]>m){
    return;
}
bool is_leaf=true;
for(auto v:g[u]){

    if(v!=parent){
        DFS(v,u);
        is_leaf=false;
    }

}
if(is_leaf){
    ans++;
}

}



int main(){

int n; cin>>n>>m;

for(int i=1; i<=n; i++){
    cin>>cat[i];
}



for (int i = 1; i < n; i++) {
    int u, v;
    cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
}

DFS(1,0);
cout<<ans<<'\n';


return 0;
}
