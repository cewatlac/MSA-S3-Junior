#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int n;cin>>n;
    long long tot=0;
    int arr[2][n];
    for (int i=0;i<2;i++) {
        for (int j=0;j<n;j++) {
            cin>>arr[i][j];
        }
    }
    for (int j=0;j<n;j++) {
        tot+=arr[0][j]*arr[1][j];
    }

    tot==0? cout<<"Yes":cout<<"No";
}
