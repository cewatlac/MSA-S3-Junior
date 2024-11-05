#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string s;
    multiset <char> ms;
    cin>>s;
    for (int i = 0 ; i < s.length() ; i++)
    {
        if (s[i] != '+')
            ms.emplace(s[i]);
    }
    string ans = "";
    for (auto it : ms) {
        ans += it;
        ans += "+";
    }
    ans.erase(ans.length() - 1);
    cout<< ans;
}
