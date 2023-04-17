#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2, s3, s4;
    int n;
    vector <pair <string, string>> v;

    cin >> s1 >> s2;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> s3;
        cin >> s4;
        v.push_back(make_pair(s3, s4));
    }

    cout << s1 << " " << s2 << endl;

    for (int j=0; j<v.size(); j++){
        if(v[j].first == s1){
            s1=v[j].second;
            cout << s1 << " " << s2 << endl;
        }else if (v[j].second == s1){
            s1=v[j].first;
            cout << s1 << " " << s2 << endl;
        } else if(v[j].first==s2){
            s2=v[j].second;
            cout << s1 << " " << s2 << endl;
        }else if(v[j].second==s2){
            s2=v[j].first;
            cout << s1 << " " << s2 << endl;
        }
    }


    return 0;
}
