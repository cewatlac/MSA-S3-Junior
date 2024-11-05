#include <iostream>
#include <cmath>
#include <string>
using namespace std;
#define ll long long

ll fib(ll n)
{
	ll fs[n + 1];
	fs[0] = 0;
	fs[1] = 1;
	fs[2] = 1;
	for (int i = 3; i <= n; i++)
	{
		fs[i] = fs[i - 1] + fs[i - 2];
	}
	return fs[n];
}

int main()
{
	ll n; cin >> n;
	cout << fib(n);
	


	return 0;
}
