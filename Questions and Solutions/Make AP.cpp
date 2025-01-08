
/*
problem: https://codeforces.com/problemset/problem/1624/B

time:O(1)
space:O()

*/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;


        if ((2 * b == a + c) ||
            ((a + c) % (2 * b) == 0) ||
            ((2 * b - a) > 0 && (2 * b - a) % c == 0) ||
            ((2 * b - c) > 0 && (2 * b - c) % a == 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
