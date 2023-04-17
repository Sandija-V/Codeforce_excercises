#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n, ones = 0, zeroes = 1, a;
        cin >> n;
        for (long long i = 0; i < n; i++){
            cin >> a;
            if (a == 1)
                ones++;
            else if(a == 0)
                zeroes*=2;
        }
        long long ans = ones * zeroes;
        cout << ans << endl;
    }
    return 0;
}
