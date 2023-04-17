#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, max_dif, dif = 0, dif2 = 0;
    cin >> n;

    vector<int> a(n);
    vector<int> a2(n-2);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    max_dif = a[1] - a[0];
    for(int j = 0; j < n-1; j++) {
        dif = a[j+1] - a[j];
        if(max_dif < dif) {
            max_dif = dif;
        }
    }

    for(int k = 0; k < n-2; k++) {
        dif2 = a[k+2] - a[k];
        a2[k] = dif2;
    }

    sort(a2.begin(), a2.end());

    for(int l = 0; l < n-2; l++) {

        if(max_dif != a2[l] && max_dif < a2[l]){
            cout << a2[l] << endl;
            break;
        }else{
            cout << max_dif << endl;
            break;
        }
    }

    return 0;
}