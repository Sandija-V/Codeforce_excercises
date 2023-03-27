#include <bits/stdc++.h>

using namespace std;

int main(){

    string month;
    int k;
    cin >> month >> k;

    string months[12] = {"January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"};

    int cur_month;
    for (int i=0; i<12; i++) {
        if (months[i] == month) {
            cur_month = i;
            break;
        }
    }

    int codecraft_month = (cur_month + k) % 12;

    cout << months[codecraft_month] << endl;
    return 0;
}
