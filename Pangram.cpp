#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    string s; cin >> s;

    string letters = "abcdefghijklmnopqrstuvwxyz";

    int all = true;
    for(int i = 0; i < letters.length(); i++) {
        int found = false;
        for(int j = 0; j < s.length(); j++) {
            if(toupper(letters[i]) == toupper(s[j])) {
                found = true;
            }
        }
        if(found == false) {
            all = false;
            break;
        }
    }
    
    if(all) cout << "YES";
    else cout << "NO";

}
