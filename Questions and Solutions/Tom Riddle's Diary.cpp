/*

Link:  https://codeforces.com/contest/855/problem/A


#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    string a[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int j = 1; j <= n; j++) {

        bool found = false; // To check if the current username has appeared before

        for (int i = 1; i < j; i++) { // Only check usernames BEFORE `j`
            if (a[i] == a[j]) {
                found = true;
                break; // No need to check further
            }
        }

        if (found) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}

   */





   #include<bits/stdc++.h>
   using namespace std;
   int main(){

   int t;
   cin>>t;
   set<string>se;
   while(t--){
    string s;
    cin>>s;

    if(se.find(s)!=se.end())
    {
        cout<<"YES"<< '\n';
    } else{
        cout<<"NO"<< '\n';
        se.insert(s);
    }


   }

   return 0;
   }























