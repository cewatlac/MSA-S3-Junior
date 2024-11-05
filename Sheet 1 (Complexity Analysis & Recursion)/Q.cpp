#include <iostream>
#include <cmath>
#define ll long long int
using namespace std;
int main()
{
    ll n, t; cin >> n >> t;
    ll o = 7 - t;
    while (n--)
    {
        ll l, r; cin >> l >> r;
        if (l == t || r == t || l == o || r == o)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    
    return 0;
}
