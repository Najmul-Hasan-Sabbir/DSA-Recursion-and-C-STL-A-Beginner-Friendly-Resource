/*

Link:  https://vjudge.net/problem/hdu-1702



 */

#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string ty;
        int operations;
        cin >> operations >> ty;

        if (ty == "FIFO") {
            queue<int> q; // Declare queue outside the loop to retain its state
            while (operations--) {
                string type;
                cin >> type;
                if (type == "IN") {
                    int x;
                    cin >> x;
                    q.push(x);
                } else { // OUT operation
                    if (q.empty()) {
                        cout << "None\n";
                    } else {
                        cout << q.front() << '\n';
                        q.pop();
                    }
                }
            }
        } else { // LIFO
            stack<int> st; // Declare stack outside the loop to retain its state
            while (operations--) {
                string type;
                cin >> type;
                if (type == "IN") {
                    int x;
                    cin >> x;
                    st.push(x);
                } else { // OUT operation
                    if (st.empty()) {
                        cout << "None\n";
                    } else {
                        cout << st.top() << '\n';
                        st.pop();
                    }
                }
            }
        }
    }

    return 0;
}
