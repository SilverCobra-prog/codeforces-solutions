#include <bits/stdc++.h>
using namespace std;

long long sumOfSums(int n) {
    long long sum = 0;
    for (int i = 1; i <= n; ++i) {
        int num = i;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << sumOfSums(n) << endl;
    }
    return 0;
}
