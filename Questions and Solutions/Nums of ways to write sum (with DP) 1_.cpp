/*

Problem: Given an n , now write the num of ways we can sum n with the digits 1 or 3.
Output the ans in Modulo 10^9+7

example : for 4

num of ways:-
1+1+1+1
1+3
3+1

so there are 3 ways for 3
time: O(n)


*/


#include<bits/stdc++.h>
using namespace std;
const int N=1e5+9 ,mod=1e9+7;

int ways[N];

int count(int n){
 if(n==1) return 1;
 if(n==2) return 1;
 if(n==3) return 2;

if(ways[n]!=-1) return ways[n];
 long long ans= count(n-1)+count(n-3);
return ways[n] = ans % mod;

}


int main(){

memset(ways, -1, sizeof ways);

cout<<count(100000)<< '\n';



return 0;
}
