#include <bits/stdc++.h>

using namespace std;

int main (){

    int n;
    cin >> n;

    int minDaysOff = (n/7) * 2;
    if(n % 7 == 6) {
        minDaysOff++;
    }
    
    int maxDaysOff = (n/7) * 2;
    int remainingDays = n % 7;
    if(remainingDays == 1) {
        maxDaysOff++;
    } else if(remainingDays >= 2) {
        maxDaysOff += 2;
    }
    
    cout << minDaysOff << " " << maxDaysOff << endl;

    return 0;
}