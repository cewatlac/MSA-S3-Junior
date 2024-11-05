#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
#define ll long long

int main()
{
	ll n; cin >> n;
	ll mx = -9999999;
	vector<ll> a;
	for (ll i = 0; i < n; i++)
	{
		ll v; cin >> v;
		a.push_back(v);
	}
	ll x; cin >> x;
	vector<ll> b = { a[0] };
	mx = a[0];
	for (ll i = 1; i < n; i++)
	{
		b.push_back(b[i - 1] + a[i]);
		mx = max(mx, b[i - 1] + a[i]);
	}

	ll ii = 0;
	ll j = x / mx;
	for (ll i = 0; i < n; i++)
	{
		ll r = b[i] + mx * j;
		if (r > x)
		{
			ii = j * n + i + 1;
			break;
		}
	}
	cout << ii;
}
