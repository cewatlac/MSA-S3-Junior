#include <iostream>
#include <string>
#include <vector>
using namespace std;

int calc(int n, vector<int>&vec){
	if(n == vec.size()-1){
		return vec[n];
	}
	return vec[n]+calc(n+1, vec);
	
}

int main(){
	
	int t;
	cin >> t;
	for(int j=1; j<=t; j++){
		int n;
		int x;
		vector<int>vec;
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> x;
			vec.push_back(x);
		}
		cout << "Case " << j << ": " << calc(0,vec) << "\n";
	}
	return 0;
}
