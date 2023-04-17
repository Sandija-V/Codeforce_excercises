#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int k = 9;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                cout << k;
                k--;
            } else {
                cout << k;
                k++;
            }
            if (k == 10) k = 0;
        }
        cout << endl;
    }

    return 0;
}
