// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector < char > v;
    stack <vector <char>>st;
    while (t--){
        int opt;
        cin >> opt;
        if (opt == 1){
            string s;
            cin >> s;
            st.push(v);
            for (auto &ch : s){
                v.push_back(ch);
            }
        }
        else if (opt == 2){
            int del;
            cin >> del;
            st.push(v);
            while(del--)v.pop_back();
        }
        else if (opt == 3){
            int k;
            cin >> k;
            cout << v[k-1] << '\n';
        }
        else if (!st.empty()) {
            v = st.top();
            st.pop();
        }
    }

    return 0;
}
