#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    /* Create a HashMap */
    int hash[256] = {0};

    /* Scan the string and count frequency
       of each character of the string */
    for(int i=0; i<s.length(); i++){
        hash[s[i]]++;
    }

    /* Temporary Variable to Store Result */
    int sum = 0;
    char ch;

    /* Compare and find the most frequent character in string */
    for(int j=0; j<s.length(); j++){
        if(hash[s[j]] > sum){
            sum = hash[s[j]];
            ch = s[j];
        }
    }

    if (sum > k){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }

    return 0;
}
