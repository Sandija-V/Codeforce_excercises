#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[100];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a, a + n);

    int p;
    int s=0;
    for(int j=0; j<n-1; j=j+2){
        p=a[j+1]-a[j];
        s=s+p;
    }

    cout << s << endl;

    return 0;
}
