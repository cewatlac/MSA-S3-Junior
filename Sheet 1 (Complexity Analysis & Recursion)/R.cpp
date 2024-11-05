#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
#define ll long long

int main()
{
	string s; cin >> s;
	int f = 0;
	for (int i = 1; i <= s.length(); i++)
	{
		if (i % 2 == 0)
		{
			if (!isupper(s[i - 1]))
			{
				f = 1;
				break;
			}
		}
		else
		{
			if (!islower(s[i - 1]))
			{
				f = 1;
				break;
			}
		}
	}

	cout << (f ? "No" : "Yes");
}
