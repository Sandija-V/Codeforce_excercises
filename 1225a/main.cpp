#include <bits/stdc++.h>

using namespace std;

int main(){

    int a1, b1;
    cin >> a1 >> b1;

    if(a1 == b1){
        cout << a1 << 11 << " " << b1 << 12 << endl;
    }else if(a1+1 == b1){
        cout << a1 << 99 << " " << b1 << "00" << endl;
    }else if(a1 == 9 && b1 == 1){
        cout << a1 << " " << b1 << 0 << endl;
    }else{
        cout << -1 << endl;
    }
    return 0;
}
