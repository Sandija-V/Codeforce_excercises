#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    /*This loop reads in the input matrix row by row, and updates the frequency count of each letter
    in each column of the matrix. The cnts vector is a 2D vector with m rows
    (corresponding to the columns in the input matrix) and 5 columns
    (corresponding to the letters A, B, C, D, and E). For each row in the input matrix,
    the loop iterates over the columns and updates the frequency count of the letter in that column. */

    vector<vector<int>> v(m, vector<int>(5));
    for (int i=0; i<n; i++) {
        string s;
        cin >> s;
        for (int j=0; j<m; j++) {
            v[j][s[j] - 'A']++;
        }
    }

    // This loop reads in the a array, which contains the score associated with each column of the input matrix.
    vector<int> a(m);
    for (int i=0; i<m; i++) {
        cin >> a[i];
    }

    /*This loop calculates the total score for the input matrix. For each column,
    it finds the maximum frequency count of any letter in that column (stored in the mx variable),
    and multiplies it by the corresponding score in the a array. The resulting product is added
    to the total variable, which stores the overall score for the matrix. */

    int total = 0;
    for (int i=0; i<m; i++) {
        int mx = 0;
        for (int j=0; j<5; j++) {
            mx = max(mx, v[i][j]);
        }
        total += mx * a[i];
    }

    cout << total << endl;
    return 0;
}
