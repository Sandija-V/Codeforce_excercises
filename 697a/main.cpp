#include <bits/stdc++.h>

using namespace std;

int main(){


    long long t, s, x;
    cin >> t >> s >> x;

    /*
    if(x < t){
        cout << "NO" << endl;
        return 0;
    }

    if(x == t){
        cout << "YES" << endl;
        return 0;
    }

    if((x-t) % s == 0 || ((x - t - 1) % s == 0 && (x - t - 1) >= 1 && (x - t - 1) / s > 0)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    */

    if (x < t) {
        cout << "NO" << endl;
    }
    else if (x == t) {
        cout << "YES" << endl;
    }
    else {
        long long time_since_start = x - t;
        if (time_since_start % s == 0 || (time_since_start - 1) % s == 0 && time_since_start > 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
