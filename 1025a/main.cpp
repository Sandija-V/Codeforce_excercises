#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    string s;
    cin >> n >> s;

    /*
    This uses a map<char, int> to count the number of puppies for each color.
    The loop iterates over each character c in the string s,
    and increments the count for that color in the count map.
    */
    map<char, int> count;
    for(char c : s){
        count[c]++;
    }

    /*
    This finds the color with the most puppies by iterating over the count map and finding the maximum count.
    */
    int max_c = 0;
    for(auto p : count){
        max_c = max(max_c, p.second);
    }

    if(max_c > 1 || s.length()==1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}
