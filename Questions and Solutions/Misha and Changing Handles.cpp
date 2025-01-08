/*

Link: https://codeforces.com/problemset/problem/501/B

    */
#include <bits/stdc++.h>

using namespace std;

int32_t main() {


    int q;
    cin >> q;

    map<string, string> owner;
    while (q--) {
        string old_username, new_username;
        cin >> old_username >> new_username;

        if (owner.find(old_username) == owner.end()) {
            owner[new_username] = old_username;
        } else {
            owner[new_username] = owner[old_username];
            owner.erase(old_username);
        }
    }

    cout << owner.size() << '\n';
    for (auto [username, owner_name] : owner) {
        cout << owner_name << " " << username << '\n';
    }

    return 0;
}
