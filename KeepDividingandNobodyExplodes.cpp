#include <bits/stdc++.h>
using namespace std;

int main() {
    int x; cin >> x;
    while(x > 1) {
        if(x % 2 == 0) {
            x /= 2;
        } else {
            if(x % 3 != 0) break;
            else x /= 3; 
        }
    }
    if(x == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}
