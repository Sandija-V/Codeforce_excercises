#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){

    //ifstream cin("a.in");
    int t, a, b, c, d;
    cin >> t;

    for(int i=0; i<t; i++){
        cin >> a >> b >> c >> d;

        int x=max(a, b);
        int y=max(c, d);

        if(x+y>a+b && x+y>c+d){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
