#include <bits/stdc++.h>

using namespace std;

int main(){

    char nav;
    char c[100]="qwertyuiopasdfghjkl;zxcvbnm,./";
    char in[105];
    cin >> nav >> in;

    for(int i=0; i<strlen(in); i++){

        for(int j=0; j<strlen(c); j++){

            if(in[i]==c[j] && nav=='R'){
                cout << c[j-1];

            }else if(in[i]==c[j] && nav=='L'){
                cout << c[j+1];
            }
        }
    }
    return 0;
}
