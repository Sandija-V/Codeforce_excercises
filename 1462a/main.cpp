#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){

    //ifstream cin("a.in");

    int t, n;
    int a;
    vector<int> myVector;

    //cin >> n;
    cin >> t;

    for(int i=0; i<t; i++){
        cin >> n;

        for(int j=0; j<n; j++){
            cin >> a;
            myVector.push_back(a);
        }


        for(unsigned int k=0; k<n/2; k++){
            cout << myVector[k] << " " << myVector[n-k-1] << " ";
        }

        if(n%2 != 0){
            cout << myVector[n/2];
        }

        cout << endl;
        myVector.clear();

    }

    return 0;
}
