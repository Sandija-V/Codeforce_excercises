#include <bits/stdc++.h>

using namespace std;

int main(){

    /*int a, b, c, d, p_M, p_V;
    cin >> a >> b >> c >> d;

    p_M = max(3*a/10, a-a/250*c);
    p_V = max(3*b/10, b-b/250*d);

    if(p_M>p_V){
        cout << "Misha" << endl;
    }else if (p_V>p_M){
        cout << "Vasya" << endl;
    }else {
        cout << "Tie" << endl;
    }*/

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    /*
    Avoid redundant calculations: In the current code, we are calculating the same expression
    (a/250)*c and (b/250)*d twice, once for Misha and once for Vasya.
    We can avoid this redundancy by calculating these expressions once and storing them in separate variables.
    */

    int ac = (a/250)*c;
    int bd = (b/250)*d;

    int misha_points = max(3*a/10, a - ac);
    int vasya_points = max(3*b/10, b - bd);

    /*
    Use ternary operator instead of if-else statement: In the current code, we are using an if-else statement
    to determine whether Misha's points are greater than, less than, or equal to Vasya's points.
    We can use the ternary operator to simplify this code and make it more concise.
    */

    string result = (misha_points > vasya_points) ? "Misha" :
                    (vasya_points > misha_points) ? "Vasya" : "Tie";
    cout << result << endl;

    return 0;
}
