#include <bits/stdc++.h>

using namespace std;

bool compare(const pair<int,int>& a, const pair<int,int>& b) {
    return a.second > b.second;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> v(m);
    for(int i = 0; i < m; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), compare);

    long long res = 0;
    for(int i = 0; i < m; i++) {
        int boxes = min(n, v[i].first);
        res += (long long) boxes * v[i].second;
        n -= boxes;
        if(n == 0) {
            break;
        }
    }

    cout << res << endl;

    return 0;
}