/*

Link: https://vjudge.net/problem/uva-484




       */
#include<bits/stdc++.h>
using namespace std;
int main (){
int value;
map<int, int>mp;
vector<int>order;
while(cin>>value){
        if(mp[value]==0){
            order.push_back(value);
        }

mp[value]++;

}
/*
for(auto key_value_pair: order){
   int key=key_value_pair.first;
   int value=key_value_pair.second;
    cout<<key << " "<< value<< '\n';
}
*/

for(auto x: order){
    cout<< x<< " "<<mp[x]<<endl;
}

return 0;}
