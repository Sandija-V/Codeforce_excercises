#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int x = 2 * a[0] - 1;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (a[i] / x);
        if (a[i] % x == 0) {
                ans--;
        }
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

