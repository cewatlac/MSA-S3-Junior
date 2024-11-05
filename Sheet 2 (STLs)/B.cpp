#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
 ios_base::sync_with_stdio(false);
 cin.tie(0);

 int n; cin >> n;

 while (n--) {
 stack<char> st;
  string str; cin >> str;

  for (int i = 0; i < str.length(); i++) {
   char c = str[i];
   
   if (st.empty()) {
    st.push(c);
    continue;
   }

   char top = st.top();

   if      (top == '(' && c == ')') st.pop();
   else if (top == '[' && c == ']') st.pop();
   else if (top == '{' && c == '}') st.pop();
   else st.push(c);
  }

  cout << (st.empty() ? "YES" : "NO") << endl;
 }
}
