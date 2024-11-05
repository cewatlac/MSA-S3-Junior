#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int m;cin>>m;
    queue<pair<int,int>>q;
    for (int i=0;i<n;i++) {
        int a;cin>>a;
        q.push(make_pair(a,i+1));
    }

    while (q.size()>1) {
        if (q.front().first-m<=0) {
            q.pop();
        }else {

            auto temp=q.front();
            q.pop();
            temp.first-=m;
            q.push(temp);
        }
    }
    cout<<q.front().second;



}
