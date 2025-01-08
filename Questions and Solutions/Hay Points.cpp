/*
Link: https://vjudge.net/problem/uva-10295



      */
#include<bits/stdc++.h>
using namespace std;
int main(){
int t,q; cin>>t>>q;
map<string ,int>mp;
while(t--){

    int x; ;
    string post;
     cin>>post>>x;

 mp[post]=x;
}

while(q--){

string word;
int salary=0;
while(cin>>word){

    if(word==".") break;
if(mp.find(word) !=mp.end()){
    salary+=mp[word];           // in this way my map size will not change , smart way
}


}
 cout<< salary<<endl;
//cout<< mp.size()<<endl;
      }

return 0;}
