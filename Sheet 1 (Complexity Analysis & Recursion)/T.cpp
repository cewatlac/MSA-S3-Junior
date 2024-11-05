#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
#define ll long long

int main()
{
	string s; cin >> s;
	for (auto& c : s)
	{
		if (c == '.') break;
		cout << c;
	}
}
