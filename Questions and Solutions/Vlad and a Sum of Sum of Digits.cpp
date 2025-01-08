/*

Link: https://codeforces.com/contest/1926/problem/C


                          */



#include <bits/stdc++.h>
using namespace std;

const int MAX = 200007;
int res[MAX];
int S(int x) {
    int sum = 0;
    while (x) {
        sum += (x % 10);
        x /= 10;
    }
    return sum;
}


void solve() {
    int x;
    cin >> x;
    cout << res[x] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Precompute the cumulative sum of digit sums
    for (int i = 1; i < MAX; i++) {
        res[i] = res[i - 1] + S(i);
    }

    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }

    return 0;
}
