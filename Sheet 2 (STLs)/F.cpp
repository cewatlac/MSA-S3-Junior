#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
 ios_base::sync_with_stdio(false);
 cin.tie(0);

 int n; cin >> n;
 int prev = -1;
 queue<int> q;

 while (n--) {
  int step; cin >> step;

  if (step <= prev) q.push(prev);

  prev = step;
 } q.push(prev);

 cout << q.size() << endl;
 
 while (!q.empty()) {
  cout << q.front();

  if (q.size() > 1) cout << ' ';
  else cout << endl;

  q.pop();
 }
}
