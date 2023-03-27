#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        long long int n, x, y, z=0;

        cin >> x >> n;
        y=n%4;

        if(y==1)
            z=-n;
        else if(y==2)
            z=1;
        else if(y==3)
            z=n+1;

        if(x%2)
            cout << x-z << endl;
        else
            cout << x+z << endl;
    }

    return 0;
}
