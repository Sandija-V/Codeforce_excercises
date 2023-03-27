#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    double x, y, x0, y0, total=0;
    /* reads input for the number of points on the path (n), the scaling factor (k),
     and the coordinates of the starting point (x0, y0) */
    cin >> n >> k >> x0 >> y0;

    /* In each iteration, it calculates the distance between the current point and
    the previous point using the Euclidean distance formula and adds it to a running total.*/
    for (int i=1; i<n; i++) {
        cin >> x >> y;
        /* The distance is calculated using the Euclidean distance formula:
        distance = sqrt((x2 - x1)^2 + (y2 - y1)^2)
        just using pow instead of multiplying the differences by themselves */
        total += sqrt(pow(x - x0, 2) + pow(y - y0, 2));
        //cout << x0 << " " << y0 << endl;
        /* updates the values of x0 and y0 to be the coordinates of the current point
        so that they can be used in the next iteration to calculate the distance to the next point. */
        x0 = x; y0 = y;
    }

    cout << fixed << setprecision(6) << total * k / 50 << endl;

    return 0;
}
