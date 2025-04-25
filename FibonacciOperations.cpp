#include <bits/stdc++.h>
using namespace std;


int main() {
    string t;
    cin >> t;

    int n = t.size();
    vector<int> lex(n);

    for (int i = 0; i < n; ++i) {
        lex[i] = t[i] - 'a';
    }


    if(t.size() < 3) {
        cout << t << endl;
    }

    for (int i = 0; i < n - 2; i++) {
        while (lex[i] > 0) {
            lex[i]++;
            lex[i] %= 26;
            lex[i + 1]++;
            lex[i + 1] %= 26; 
            lex[i + 2] += 24;
            lex[i + 2] %= 26; 
        }
    }

    for (int i = 0; i < n; ++i) {
        t[i] = lex[i] + 'a';
    }

    cout << t << endl;
}
