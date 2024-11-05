#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
#define ll long long

int main()
{
	string s; cin >> s;
	int lnz = 0;
	for (int i = s.length() - 1; i >= 0; i--)
	{
		if (s[i] != '0')
		{
			lnz = i;
			break;
		}
	}
	int p = 1;
	for (int i = 0; i <= lnz / 2; i++)
	{
		if (s[i] != s[lnz - i]) p = 0;
	}
	cout << (p ? "Yes" : "No");


	return 0;
}
