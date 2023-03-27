#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    int n;

    for(int i=0; i<t; i++){
        cin >> n;
        int a[n];

        for(int j=0; j<n; j++){
            cin >> a[j];
        }

        int b[n];


        for(int k=0; k<n; k++){
            b[k]=a[k];
        }

        sort(a, a+n);


        if(equal(a, a+n, b)){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }

    return 0;
}
