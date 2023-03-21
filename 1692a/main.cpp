#include <bits/stdc++.h>

using namespace std;

int main(){

   // ifstream cin("a.in");
    int t, a, b, c, d;
    cin >> t;

    for(int i=0; i<t; i++){
        cin >> a >> b >> c >> d;

        int r=0;
        if (b>a) r++;
        if (c>a) r++;
        if (d>a) r++;
        cout << r << endl;
    }

    return 0;
}
