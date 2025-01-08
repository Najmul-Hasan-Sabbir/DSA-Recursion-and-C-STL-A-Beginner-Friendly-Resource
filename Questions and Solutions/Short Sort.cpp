/*

Link:    https://codeforces.com/problemset/problem/1873/A

time: O(t)
space: O(1)
    */

    #include <bits/stdc++.h>

using namespace std;

void solve() {
    string cards;
    cin >> cards;


    string target = "abc";

    if (cards == target) {
        cout << "YES\n";
        return;
    }

    int mismatch_count = 0;
    for (int i = 0; i < 3; i++) {
        if (cards[i] != target[i]) {
            mismatch_count++;
           }
    }

    if (mismatch_count == 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
