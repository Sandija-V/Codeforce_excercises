#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s){
    string p=s;
    reverse(p.begin(), p.end());

    if(s==p){
        return true;
    }else{
        return false;
    }
}

int main(){
    int t, n, k;
    string s;
    cin >> t;

    for(int i; i<t; i++){
        cin >> n >> k;
        cin >> s;

        if(k==0 || isPalindrome(s)){
            cout << 1 << endl;
        }else{
            cout << 2 << endl;
        }
    }
    return 0;
}
