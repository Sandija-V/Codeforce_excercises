#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long steps = 0;
        while (n > 0) {
            if (n % k == 0) {
                n /= k;
                steps++;
            } else {
                steps += n % k;
                n -= n % k;
            }
        }
        cout << steps << endl;
    }


    return 0;
}
