#include <bits/stdc++.h>

using namespace std;

int main(){

    int t, k, r, c, s, d, x;
    cin >> t;

    for(int i=0; i<t; i++){
        cin >> k;

        s=ceil(sqrt(k));
        d=(s*s)-k;

        if(d<s){
            r=s;
            c=d+1;
            cout << r << " " << c << endl;
        }else if(d>=s){
            c=s;
            x=d-s;
            r=s-x-1;
            cout << r << " " << c << endl;
        }

    }

    return 0;
}
