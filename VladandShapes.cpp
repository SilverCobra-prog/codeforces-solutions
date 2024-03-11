#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; 
    cin >> t;
    while(t--) {
        int n; 
        cin >> n;
        vector<vector<char>> grid(n, vector<char>(n));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> grid[i][j]; 
            }
        }
        
        int num = 0;
        bool isTriangle = false;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == '1' && grid[i][j-1] == '0' && grid[i][j+1] == '0') {
                    isTriangle = true;
                }
                if(grid[i][j] == '1') num++;
            }
        }
        if(num == 1) isTriangle = false;
        if(isTriangle) cout << "TRIANGLE" << endl;
        else cout << "SQUARE" << endl;
    }
}
