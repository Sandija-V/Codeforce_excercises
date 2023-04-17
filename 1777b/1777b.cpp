#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long long ans = 1;
        for (int i = 1; i <= n; i++) {
            ans = (ans * i) % MOD;
        }
        ans = (ans * (n-1)) % MOD;
        ans = (ans * n) % MOD;

        cout << ans << endl;
    }
    return 0;
}