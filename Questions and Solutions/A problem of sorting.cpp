/*


Link: https://vjudge.net/problem/hdu-5427


   */


   #include<bits/stdc++.h>
   using namespace std;
   int main(){

   int test;
   cin>>test;
   while(test--){

    vector< pair<int, string>>vec;

    int t; cin>>t;
    cin.ignore();

    while(t--){

        string s;
        getline(cin,s);
        int len=s.size();
        string birth_year_string;
        birth_year_string=s.substr(len-4);
        int birth_year_int=stoi(birth_year_string);
        string name=s.substr(0, len-5);
        vec.push_back(make_pair(birth_year_int, name));

    }


    sort(vec.rbegin(), vec.rend()); // we use "rbegin" for sorting in reverse order


    for(auto [birth_year_int, name] :vec){

        cout<<name<< '\n';
    }
   }

   return 0;
   }
