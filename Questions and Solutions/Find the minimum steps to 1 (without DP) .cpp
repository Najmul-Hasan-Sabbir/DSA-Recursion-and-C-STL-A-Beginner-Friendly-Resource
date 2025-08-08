/*

Here a n will be given u need to find the minimum steps to reach 1.
You can perform these operations as:
1. Subtract 1 from n as n-1
2. Divide by 2
3. Divide by 3

example: for 7 the ans is 3

Now we will code it without DP


*/
#include<bits/stdc++.h>
using namespace std;
int ans;


int min_steps(int n){
if(n==1) return 0;


 ans=min_steps(n-1)+1;

 if(n%2==0){

    ans=min(ans, min_steps(n/2)+1);

 }
if(n%3==0){

    ans=min(ans, min_steps(n/3)+1);
}



return ans;
}



int main(){
int n;cin>>n;

cout<< "Minimum steps for "<< n<< " is:"<< min_steps(n)<<endl;



return 0;
}
