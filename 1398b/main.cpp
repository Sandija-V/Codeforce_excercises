#include <bits/stdc++.h>

using namespace std;

int main(){
    //cout << "a" << endl;
    //ifstream cin("a.in");

    int t;
    int res;
    int c = 0;
    string s;
    vector<int> v;

    cin >> t;

    for(int i=0; i<t; i++){
           // cout << i << endl;
        cin >> s;

        for(int j=0; j<s.length(); j++){
             //   cout << j << endl;
            if(s[j]=='1'){
                c++;
                //myVector.push_back(vieninieki);
            }else{
                if(c>0){
                    v.push_back(c);
                    c=0;
                }
            }
        //myVector.push_back(vieninieki);

        }
        if(c>0){
            v.push_back(c);
            c=0;
        }

        sort(v.begin(), v.end(), greater<int>());

        res=0;
        for(int l=0; l<v.size(); l=l+2){
            res=res+v[l];
        }

        cout << res << endl;
        v.clear();
    }

    return 0;
}
