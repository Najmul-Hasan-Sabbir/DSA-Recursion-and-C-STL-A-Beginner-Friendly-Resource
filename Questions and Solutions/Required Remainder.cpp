/*

Link : https://codeforces.com/problemset/problem/1374/A

                */


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, n;
        cin >> x >> y >> n;


        long long m = (n - y) / x;
        long long k = m * x + y;

        cout << k << endl;
    }
    return 0;
}
