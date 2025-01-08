

/*   problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J



first approach :
time--->O(
space--> O()1

Optimize approach:
time----> O(t*sqrt(n) )---- 0.316 sec , this will pass
space---> O(1)



  */




  #include <bits/stdc++.h>
using namespace std;

long long fact(long long n) {
    if (n == 0) return 1;
    return n * fact(n - 1);
}

int main() {
    long long n;
    cin >> n;

    // Calculate factorial
    cout << fact(n) << endl;
    return 0;
}
