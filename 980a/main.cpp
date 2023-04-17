#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    int l=0, p=0;
    cin >> s;

    for(int i=0; i<s.size(); i++){
        if(s[i]=='-'){
            l++;
        }else if(s[i]=='o'){
            p++;
        }
    }

    if(l==0 || p==0){
        cout << "YES" << endl;
    }else if(l%p==0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }


    return 0;
}
