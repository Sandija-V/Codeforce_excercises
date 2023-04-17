#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n), v2(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int cream = 0;
        for (int i = n - 1; i >= 0; i--) {
            cream = max(cream - 1, v[i]); // drench the ith layer if there is enough cream
            v2[i] = (cream > 0); // mark the ith layer as drenched or not
        }

        for (int i = 0; i < n; i++) {
            cout << v2[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
