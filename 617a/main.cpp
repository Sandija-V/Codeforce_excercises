#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;
    int r=x/5;

    if(x%5==0){
        cout << r;
    } else {
        cout << r+1;
    }
    // if(x%5>0) r++;


    return 0;
}
