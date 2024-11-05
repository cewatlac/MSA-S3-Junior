#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
#define ll long long

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, d; cin >> n >> d;
		vector<int> a;
		while (n--)
		{
			int v; cin >> v;
			a.push_back(v);
		}
		
		int f = 0;
		for (int v : a)
		{
			if (v > d)
			{
				f = 1;
				break;
			}
		}
		if (!f) cout << "Yes" << endl;
		else
		{
			int mn1 = 999999, mn2 = 999999;
			int mn1i;
			for (int i = 0; i < a.size(); i++)
			{
				if (a[i] < mn1)
				{
					mn1 = a[i];
					mn1i = i;
				}
			}
			for (int i = 0; i < a.size(); i++)
			{
				if (i != mn1i)
				{
					mn2 = min(mn2, a[i]);
				}
			}
			if (mn1 + mn2 <= d) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
	}


	return 0;
}
