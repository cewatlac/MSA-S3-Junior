#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <cassert>
#include <unordered_map>

#define DEBUG false
#define OJ_DEBUG

#define FLUSH ios::sync_with_stdio(false),cin.tie(NULL);

#define fr(n) for(int i = 0; i < n; i++)
#define frj(n) for(int j = 0; j < n; j++)

#define pairs(x , y) make_pair(x , y)
#define all(x) x.begin() , x.end()
#define rall(x) x.rbegin() , x.rend()

#define ll long long

#define nl '\n'

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
char dir[] = {'U', 'D', 'L', 'R'};

using namespace std;

const int N = (int)1e6+ 5;
int pre[N];
int prefsum[N][10];

int foo(int n)
{   
    if(n < 10)
        return n;
    
    int ret = 1;
    while(n)
    {
        if(n % 10)
            ret *= n % 10;

        n /= 10;
    }

    return foo(ret);
}

void pre_compute()
{
    for(int i = 1; i < N; i++)
    {
        if(i < 10){
            pre[i] = i;
        }
        else {
            pre[i] = foo(i);
        }

        for(int j = 0; j < 10; j++){
            prefsum[i][j] = prefsum[i - 1][j];
        }

        prefsum[i][pre[i]] += 1;
    }
}

void solve() 
{   
    int q; cin >> q;

    while(q--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        cout << prefsum[r][k] - prefsum[l - 1][k] << nl;
    }
}

int main()
{   
    FLUSH
    int tt = 1;
    
    //cin >> tt;

    pre_compute();
    while(tt--) solve();
}
