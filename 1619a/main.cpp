#include <bits/stdc++.h>
#include <string>

using namespace std;

bool isSquareString(string str, int len){
    for(int i=0; i<len/2; i++)
        if(str[i]!=str[i+len/2])
            return false;

    return true;

}


int main(){
    //ifstream cin("a.in");

    int t;
    cin >> t;
    string str;

    for(int i=0; i<t; i++){
        cin >> str;
        int len = str.length();

        if(len%2 != 0){
            cout << "NO" << endl;
        }else{
            if(isSquareString(str, len)){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
