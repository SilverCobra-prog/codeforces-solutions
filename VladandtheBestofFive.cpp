#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    string s;

    for(int i = 0; i < t; i++) {
        cin >> s;
        int b = 0, a = 0;
        for(int j = 0; j < 5; j++) {
            if(s[j] == 'B') b++;
            if(s[j] == 'A') a++;
        }
        if(b > a) cout << 'B';
        else cout << "A";
    }

}