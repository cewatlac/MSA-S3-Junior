    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
        int n,d;cin>>n>>d;
        deque<int>dq;
        while (n--) {
            int x;cin>>x;
            dq.push_back(x);
        }
        int tmp;
        while (d--) {
            tmp=dq.front();
            dq.pop_front();
            dq.push_back(tmp);
        }
        for (int& i:dq) {
            cout<<i<<" ";
        }
    }
