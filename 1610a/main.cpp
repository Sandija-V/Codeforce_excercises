#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, m;
    cin >> t;


    for(int i=0; i<t; i++){
        cin >> n >> m;

        if(n==1 && m==1){
            cout << "0" << endl;
            continue;
        }else if(n==1 || m==1){
            cout << "1" << endl;
            continue;
        }else{
            cout << "2" << endl;

        }

    }

    return 0;
}
