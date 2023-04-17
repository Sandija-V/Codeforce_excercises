#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];
    int p[n];
    int sum = 0;

    for(int i=0; i<n; i++){
        cin >> a[i] >> p[i];
    }

    /*for (int k=0; k<n; k++){
        cout << a[k] << " " << p[k] << endl;
    }*/
        int temp = p[0];
        sum += temp*a[0];

    //cout << sum << endl;

    for(int j=1; j<n; j++){
        if(temp>p[j]){
            temp = p[j];
            sum += temp*a[j];
            //cout << sum << endl;
        }else{
            sum += temp*a[j];
        }
    }

    cout << sum << endl;

    return 0;
}
