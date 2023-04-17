#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, s = 0;
    cin >> n;

    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    if(n < 3){
        cout << 0 << endl;
        return 0;
    }

    long long largest = *max_element(a.begin(), a.end());
    long long smallest = *min_element(a.begin(), a.end());

    for(int j = 0; j < n; j++){
        if(a[j] > smallest && a[j] < largest){
            s++;
        }
    }

    cout << s << endl;

    return 0;
}