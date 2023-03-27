#include <bits/stdc++.h>

using namespace std;

int main(){

    //ifstream cin("a.in");
    int t;
    cin >> t;
    int n;
    string s;

    for(int i=0; i<t; i++){

        cin >> n;
        cin >> s;
        bool found = false;

        if(n==1){
            cout << "-1 -1" << endl;
        }else{
            for(int j=0; j<n-1; j++){
                if(s[j]!=s[j+1]){
                    cout << j+1 << " " << j+2 << endl;
                    found = true;
                    break;
                }
            }

        if(found == false){
            cout << "-1 -1" << endl;
            }
        }
    }

    return 0;
}
