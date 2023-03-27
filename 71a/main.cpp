#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    string w;

    for(int i=0; i<n; i++){
        //getline(cin, w);
        cin >> w;

        int len=w.size();
        if(len<10){
            cout << w << endl;
        }else{
            cout << w[0] << len-2 << w[len-1] <<endl;
        }
    }

    return 0;
}
