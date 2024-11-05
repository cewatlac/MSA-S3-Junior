#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long double n;
    cin>>n;
    //x(x+1) /2 >= n
    long double x = ceil((-(1) + sqrt( 4 * (1) * (2 * n)) )/ 2*(1));
    cout << x;
}
