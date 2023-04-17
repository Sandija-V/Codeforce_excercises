#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, k;
    cin >> n >> k;

    vector<pair<int,int>> restaurants(n);
    for (int i = 0; i < n; i++){
        cin >> restaurants[i].first >> restaurants[i].second;
    }

    /* This line defines a lambda function that compares two restaurants based on their joy value. The function takes two pairs of integers as input and returns a boolean value. The function first calculates the joy value of each restaurant and then compares them. The lambda function captures the time for lunch break k by value. */
    auto cmp = [k](pair<int,int> r1, pair<int,int> r2){
        int joy1 = (r1.second > k) ? r1.first - (r1.second - k) : r1.first;
        int joy2 = (r2.second > k) ? r2.first - (r2.second - k) : r2.first;
        return joy1 > joy2;
    };
    sort(restaurants.begin(), restaurants.end(), cmp);

    // The value of max_joy is determined by the same calculation as joy1 and joy2 in the lambda expression, but applied to the first restaurant in the sorted vector restaurants.
    int max_joy = (restaurants[0].second > k) ? restaurants[0].first - (restaurants[0].second - k) : restaurants[0].first;
    cout << max_joy << endl;

    return 0;
}