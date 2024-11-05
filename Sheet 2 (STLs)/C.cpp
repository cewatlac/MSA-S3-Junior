#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <climits>
#include <deque>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>

//#inlcude <bits/stdc++.h>
#define ll long long

#define ALL (v.begin(),v.end())
using namespace std;

void solve(){
	
	int n;
	cin >> n;
	deque<int>d;
	int a;
	while(n--){
		cin >> a;
		if(a<0){
			d.push_front(a);
		}else{
			if(a>0){
				d.push_back(a);
			}
		}
	}
	cout << 1 << " " << d.front();
	cout << "\n";
	d.pop_front();
	if(d.back()>0){
		cout << 1 << " " << d.back();
		d.pop_back();
	}else{
		cout << 2 << " " << d.back() << " ";
		d.pop_back();
		cout << d.back();
		d.pop_back();
	}
	cout << "\n";
	cout << d.size()+1 << " " << 0;
	for(auto e: d){
		cout << " " << e;
	}
	cout << "\n";
}


int main(){
	
	ll t=1;
	//cin >> t;
	while(t--){
		solve();
	}
	
	
	return 0;
}
