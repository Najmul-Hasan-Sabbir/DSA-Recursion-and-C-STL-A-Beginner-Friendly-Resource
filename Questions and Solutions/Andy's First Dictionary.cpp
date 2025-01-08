
    /*


Link: https://vjudge.net/problem/uva-10815

time: O(n)
space: O(n)
     */


#include <bits/stdc++.h>

using namespace std;

int main() {

   string s;
   set<string>se;
   while(cin>>s){

    string word="";
    //int n; n=s.size();

    for(int i=0; i<s.size(); i++){

        if(isalpha(s[i])){
            word+=tolower(s[i]);
        }
        else{
            if(!word.empty()){
                se.insert(word);
                word="";
            }
        }
    }
    if(!word.empty()){
        se.insert(word);

    }

   }
    for(auto i :se){
        cout<< i <<'\n';
    }
    return 0;
}
