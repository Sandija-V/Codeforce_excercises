#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, k, res = 0;
    cin >> n >> k;
    
    if(k <= n * 3){
        res = n * 3 - k;
        cout << res << endl;
    }else{
        cout << 0 << endl;
    }

    return 0;
}