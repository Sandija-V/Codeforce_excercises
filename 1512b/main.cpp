#include <bits/stdc++.h>

using namespace std;

int main(){

    //ifstream cin("a.in");
    int t;
    int n;
    // [rindas] [kolonnas]
    char a[400][400];
    vector <pair<int, int>> v;

    cin >> t;

    for(int i=0; i<t; i++){
        v.clear();
        cin >> n;

        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                cin >> a[j][k];

                if(a[j][k]=='*'){
                    v.push_back(make_pair(j, k));
                }
            }
        }

        if(v[0].first==v[1].first && v[0].first!=0){
            a[0][v[0].second]='*';
            a[0][v[1].second]='*';
        }else if(v[0].first==v[1].first && v[0].first==0){
            a[1][v[0].second]='*';
            a[1][v[1].second]='*';
        }

        if(v[0].second==v[1].second && v[0].second!=0){
            a[v[0].first][0]='*';
            a[v[1].first][0]='*';
        }else if(v[0].second==v[1].second && v[0].second==0){
            a[v[0].first][1]='*';
            a[v[1].first][1]='*';
        }

        if(v[0].first!=v[1].first && v[0].second!=v[1].second){
            a[v[0].first][v[1].second]='*';
            a[v[1].first][v[0].second]='*';
        }


        for (int l=0; l<n; l++) {
            for (int m=0; m<n; m++) {
                cout << a[l][m];
            }
                cout << endl;
        }

    }

    return 0;
}
