#include <iostream>
#include <cmath>
#define ll long long int
using namespace std;
int main()
{
    ll n; cin >> n;
    ll mn = pow(10, 9);
    while (n--)
    {
        ll a, p, x; cin >> a >> p >> x;
        if (x - a > 0)
        {
            mn = min(mn, p);
        }
    }
    cout << (mn == pow(10, 9) ? -1 : mn);
    
    return 0;
}
