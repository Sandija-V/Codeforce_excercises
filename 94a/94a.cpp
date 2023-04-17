#include <bits/stdc++.h>

using namespace std;

int main(){

    string s[10];
    string binary;
    cin >> binary;

    for (int i = 0; i < 10; i++) {
        cin >> s[i];
    }

    for (int i = 0; i < 8; i++) {
        string substr = binary.substr(i * 10, 10);
        for (int j = 0; j < 10; j++) {
            if (substr == s[j]) {
                cout << j;
                break;
            }
        }
    }
    cout << endl;

    return 0;
}