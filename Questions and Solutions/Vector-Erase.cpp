/*

Link: https://vjudge.net/problem/hackerrank-vector-erase

time: O(n)
space: O(n)

  */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, n;
    cin >> n;
    vector<int> v(n);


    for (i = 0; i < n; i++) {
        cin >> v[i];
    }

    int id;
    cin >> id;
    v.erase(v.begin() + (id-1));

    int l,r; cin>> l>>r;
    v.erase(v.begin()+(l-1) ,v.begin()+(r-1));
         cout<< v.size()<<endl;
    for (i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
    }

    return 0;
}
