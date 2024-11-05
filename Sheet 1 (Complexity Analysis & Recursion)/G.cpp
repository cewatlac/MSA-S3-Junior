#include <iostream>
#include <cmath>
#include <string>
using namespace std;
#define ll long long

string superDigit(string n, int k)
{
	if (n.length() == 1)
	{
		return n;
	}
	ll tot = 0;
	for (auto& c : n)
	{
		tot += (c - '0') * k;
	}
	return superDigit(to_string(tot), 1);
}

int main()
{
	string n;
	int k;
	cin >> n >> k;
	string s = superDigit(n, k);
	cout << s;
	


	return 0;
}
