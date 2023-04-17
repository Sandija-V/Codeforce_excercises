#include <bits/stdc++.h>

using namespace std;

int main(){

    unsigned long int n, m;
    cin >> n >> m;
    long long o = pow(2, n);
    unsigned long int res = m % o;
    cout << res << endl;

    return 0;
}
