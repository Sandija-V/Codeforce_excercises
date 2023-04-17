#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        bool allZero = true;
        int l = -1, r = n + 1;

        /* reads in the values of the array a, and checks if each value is non-zero. If it is non-zero,
        it sets allZero to false and updates l to be the current index i if it has not been updated before
        (meaning this is the first non-zero value encountered), and updates r to be the current index i
        (updating it continuously to the latest non-zero value). */
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] != 0) {
                allZero = false;
                if (l == -1) l = i;
                r = i;
            }
        }
        if (allZero) {
            cout << 0 << endl;
        } else {
            allZero = true;
            /*  If there is at least one non-zero value in the array, it checks to see
            if there are any zero values before the leftmost non-zero value (for loop with index i from 1 to l-1) */
            for (int i = 0; i < l; i++) {
                if (a[i] != 0) allZero = false;
            }
            /* Checks if there are any zero values after the rightmost non-zero value (for loop with index i from r+1 to n) */
            for (int i = r + 1; i < n; i++) {
                if (a[i] != 0) allZero = false;
            }
            /* Checks if there are any non-zero values between the leftmost and rightmost non-zero values
            (for loop with index i from l to r). If any of these three conditions are true,
            allZero is set to false. */
            for (int i = l; i <= r; i++) {
                if (a[i] == 0) allZero = false;
            }
            if (allZero) {
                cout << 1 << endl;
            } else {
                cout << 2 << endl;
            }
        }
    }
    return 0;
}








