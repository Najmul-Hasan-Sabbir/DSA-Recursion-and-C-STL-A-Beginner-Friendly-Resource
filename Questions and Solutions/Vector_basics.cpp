#include<bits/stdc++.h>
 using namespace std;

int main() {

vector<int> a;
 a.push_back(10);
 a.push_back(20);
 a.push_back(30);
 cout << a[0] << ' ' << a[1] << '\n';
 int sz = a.size();
 for (int i = 0; i < sz; i++) {
 cout << a[i] << ' ';
 }
 cout << '\n';

 vector<int> v;
 int n; cin >> n;
 for (int i = 0; i < n; i++) {
 int x; cin >> x;
 v.push_back(x);
 }
 for (int i = 0; i < v.size(); i++) {
 cout << v[i] << ' ';
 }
 cout << '\n';
 v.pop_back();
 for (int i = 0; i < v.size(); i++) {
 cout << v[i] << ' ';
 }
 cout << '\n';
 return 0;
 }

