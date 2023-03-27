#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){

    long long n, k;
    cin >> n >> k;

    long long a = (n+1)/2;

    if(k<=a){
        cout << k*2-1;

    }else{
        cout << (k-a)*2;
    }

    return 0;
}
