#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;

    for(int i=0; i<q; i++){
        int n;
        cin >> n;
        string s;
        cin >> s;

        if(n==2 && s[0]>=s[1]){
            cout << "NO" << endl;

        }else{
            cout << "YES" << endl;
            cout << 2 << endl;

            for(int j=0; j<n; j++){
                if(j==0){
                    cout << s[j] << " ";
                }else{
                    cout << s[j];
                }
            }
            cout << endl;
        }

    }

    return 0;
}
