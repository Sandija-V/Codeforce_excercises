#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        long long s;
        cin >> s;
        int res = 0;
        while(s >= 10){
            int x = s / 10 * 10; // choose the maximum multiple of 10
            res += x;
            s = s - x + x / 10;
        }
        res += s; // add the remaining balance
        cout << res << endl;
    }

    return 0;
}
