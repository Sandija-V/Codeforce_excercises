#include <bits/stdc++.h>

using namespace std;

void solve(int n) {
    if (n % 2 == 0) {
        cout << "2 " << n-3 << " 1" << endl;
    } else if (n % 4 == 1) {
        cout << n/2-1 << " " << n/2+1 << " 1" << endl;
    } else {
        cout << n/2-2 << " " << n/2+2 << " 1" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
