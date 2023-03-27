#include <bits/stdc++.h>

using namespace std;


int main(){

    int n;
    string s;
    map<string, int>M;

    cin >> n;
    cin >> s;

   for(int i=0; i<n-1; i++){
        string s2 = s.substr(i, 2);
        M[s2]=M[s2]+1;
   }

   map<string, int>::iterator it = M.begin();

   while(it != M.end()){
        string k = it->first;
        int c = it->second;
        //cout << k << " " << c << endl;
        it++;
   }

    string rs;
    int maxc= INT_MIN;

    for (const auto &entry: M){

        if (maxc < entry.second){

            maxc= entry.second;
            rs = entry.first;
        }
    }

    cout << rs << endl;

    return 0;
}
