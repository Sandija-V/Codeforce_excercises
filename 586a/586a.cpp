#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, pairs = 0;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int j = 0; j < n; j++){
        if((a[j-1] == 1 && a[j] == 0 && a[j+1] == 1) || a[j] == 1){
            pairs++;
        }
    }

    cout << pairs << endl;

    return 0;
}