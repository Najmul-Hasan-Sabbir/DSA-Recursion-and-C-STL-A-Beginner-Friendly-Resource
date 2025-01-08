/*

 Link: https://codeforces.com/problemset/problem/558/A


    */


    #include <iostream>
#include <deque>

using namespace std;

int get_total_apples(deque<pair<int, int>> left, deque<pair<int, int>> right) {
    int total_apples = 0;

    while (true) {
        if (left.empty()) break;
        total_apples += left[0].second;
        left.pop_front();

        if (right.empty()) break;
        total_apples += right[0].second;
        right.pop_front();
    }

    return total_apples;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    deque<pair<int, int>> left, right;

    for (int i = 1; i <= n; i++) {
        int position, apples;
        cin >> position >> apples;

        if (position < 0) {
            left.push_back({-position, apples});
        } else {
            right.push_back({position, apples});
        }
    }

    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    int total_apples = get_total_apples(left, right);
    total_apples = max(total_apples, get_total_apples(right, left));

    cout << total_apples << '\n';

    return 0;
}
