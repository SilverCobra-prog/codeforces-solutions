#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> a(t);
    for(int i = 0; i < t; i++) {
        cin >> a[i];
        cout << a[i]+1 << endl;
    }
}