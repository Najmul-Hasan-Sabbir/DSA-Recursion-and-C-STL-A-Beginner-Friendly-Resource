

/*   problem link:  https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/C

Time: O(n)
Space: O(n)


 */

#include <bits/stdc++.h>
using namespace std;

int max_check(int n, long long max_value = -10e9) {
    if (n == 0) {
        return max_value;
    }

    int a;
    cin >> a;

    if (a > max_value) {
        max_value = a;
    }

    return max_check(n - 1, max_value);
}

int main() {
    int n;
    cin >> n;

    cout << max_check(n) << endl;

    return 0;
}
