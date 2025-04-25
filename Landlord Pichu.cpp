#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> a(n, vector<int>(m, 1));

    if (k == 0) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << 0 << " ";
            }
            cout << endl;
        }
        return 0;
    }


    bool fs = true;
    int x = 0, y = 0;
    while (k > 0 && x < n) {
        if (y >= m) {
            if (fs) {
                y = 1;
                fs = false;
            } else {
                y = 0;
                fs = true;
            }
            x++;
        } else {
            a[x][y] = 0;
            k--;
            y += 2;
        }
    }

    if(k > 0) {
        cout << -1 << endl;
    } else {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    
}
