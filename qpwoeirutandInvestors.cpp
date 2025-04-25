#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    
    bool works = true;
    if(!(n==1 || n == 2)) {
        for(int i = 1; i < n-1; i++) {
            int prevSlope = nums[i] - nums[i-1];
            int nextSlope = nums[i+1] - nums[i];
            if ((prevSlope == nextSlope) || (prevSlope == 1 && nextSlope == -1) || (prevSlope == -1 && nextSlope == 1)) continue;
            works = false;
            break;
        }
    }

    if(works) cout << "YES";
    else cout << "NO";

}
