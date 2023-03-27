#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n;
    cin >> n;

    string s = to_string(n);

    if(n>=0){
        cout << n << endl;
    } else {
        // check if removing the last digit yields a greater balance
        string s1 = s.substr(0, s.length()-1); // remove last digit
        cout << s1 << endl;
        long long n1 = stoi(s1);
        // check if removing the second-last digit yields a greater balance
        string s2 = s.substr(0, s.length()-2) + s[s.length()-1]; // remove second-last digit
        cout << s2 << endl;
        long long n2 = stoi(s2);

        // output the greater of the two balances
        cout << max(n1, n2) << endl;
    }

    return 0;
}
