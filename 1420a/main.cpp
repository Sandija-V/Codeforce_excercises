#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool flag = false;
        for (int i = 1; i < n; i++) {
            if (a[i] >= a[i - 1]) {
                flag = true;
                break;
            }
        }
        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
