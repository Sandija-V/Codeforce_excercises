#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int k = 2; // start with k=2
        while (true) {
            // calculate the sum of the arithmetic series x + 2x + 4x + ... + (2^k - 1)x for increasing values of k
            // (1 << k) - 1 is a bit shift operation that calculates the value of 2^k - 1
            int sum = (1 << k) - 1;
            sum *= n / sum; // calculate the maximum multiple of sum that is <= n
            if (sum == n) {
                cout << n / ((1 << k) - 1) << endl;
                break;
            }
            k++;
        }
    }
    return 0;
}
