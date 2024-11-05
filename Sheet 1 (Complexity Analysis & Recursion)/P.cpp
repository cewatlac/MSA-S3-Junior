// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;
#define ui unsigned int
ui d(ui l, ui s) {
    if (l <= s) return 1;
    
    if (l % 2 == 0) {
        return d(l/2, s) * 2;
    } else {
        return d(l/2+1, s) + d(l/2, s);
    }
}

int main() {
    ui l,s;
    while (cin>>l>>s) {
        //ui l, s;
        //cin>>
        cout << d(l, s) << '\n';
    }
    

    return 0;
}
