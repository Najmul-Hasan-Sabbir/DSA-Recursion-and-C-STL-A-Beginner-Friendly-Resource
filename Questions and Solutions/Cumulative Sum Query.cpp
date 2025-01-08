/*
link: https://vjudge.net/problem/spoj-csumq


time :O(n+Q)
space:

   */
   //time :O(n+Q)

   #include<bits/stdc++.h>
   using namespace std;

   const int N=1e5+9;
   int a[N];
   long long prefix_sum[N];


   int main(){


   int n;
   cin>>n;
   for(int i=0; i<n; i++){


    cin>>a[i];
   }


   for(int i=0; i<n; i++){

    prefix_sum[i]=a[i];
    if(i>0){
        prefix_sum[i]+=prefix_sum[i-1];
    }

   }
   int Q; cin>>Q;

   while(Q--){

    int l,r;
    cin>>l>>r;
    long long sum=0;


    sum=prefix_sum[r];
    if(l>0){

        sum-=prefix_sum[l-1];
    }
    cout<<sum<< '\n';
   }


   return 0;
   }



   /*

   // Brute force solution
   // Time: O(Q x n)
#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;

int a[n+1];
for(int i=0; i<n; i++){


    cin>>a[i];
}
int Q;
cin>>Q;
while(Q--){


    int l,r;
    cin>>l>>r;
    long long sum=0;

    for(int i=l; i<=r; i++){

         sum+=a[i];
    }
    cout<<sum<< '\n';
}





return 0;

}


*/
