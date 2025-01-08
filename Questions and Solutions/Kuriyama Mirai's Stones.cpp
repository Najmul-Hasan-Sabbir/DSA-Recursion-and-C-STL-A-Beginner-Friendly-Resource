/*
Link:  https://codeforces.com/problemset/problem/433/B

time: O(n log n +q)

space: O(n)



*/
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+9;
int a[N], b[N];
long long prefix_sum_a[N], prefix_sum_b[N];


int main (){
int n; cin>>n;

for(int i=1; i<=n; i++){

    cin>> a[i];
    b[i]=a[i];
}


sort(b+1, b+n+1);
for(int i=1; i<=n; i++){


    prefix_sum_a[i]=prefix_sum_a[i-1]+a[i];
}

for(int i=1; i<=n; i++){

    prefix_sum_b[i]=prefix_sum_b[i-1]+b[i];
}

int q; cin>>q;
while(q--){
    int type, l,r;
    cin>> type>>l>>r;

    if(type==1){
        //Normal array sum

        cout<< prefix_sum_a[r]-prefix_sum_a[l-1]<< '\n';
    }
    else{
        //sorted array sum
        cout<< prefix_sum_b[r]-prefix_sum_b[l-1]<< '\n';
    }
}

return 0;
}
