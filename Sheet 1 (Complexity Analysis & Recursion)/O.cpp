#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
#define ll long long

int main()
{
	ll n, s, d; cin >> n >> s >> d;
	int f = 0;
	while (n--)
	{
		int x, y; cin >> x >> y;
		if (x < s && y > d)
		{
			f = 1;
		}
	}
	cout << (f ? "Yes" : "No");
}
