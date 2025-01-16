
/*


Link: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A

    */
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
int a[N], x;

bool search(int l, int r) {

    while(l<=r){

        int mid=(l+r)/2;
        if(a[mid]==x){

            return true;

        }
 if(a[mid]<x) {

    l=mid+1;

}
else{

    r=mid-1;
}

    }

return false;
}

int32_t main() {
    int n, q;
    cin >> n >> q;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    while (q--) {
        cin >> x;
        if (search(1, n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
