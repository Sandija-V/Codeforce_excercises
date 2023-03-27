#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    string s;
    cin >> n >> s;

    /* It then loops over all divisors of n.
    For each divisor i, it reverses the substring of s starting at position 0 and ending at position i-1. */
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            /* The loop uses two indices j and k to swap characters in s from the beginning and the end
            of the current substring, until j >= k.
                It initializes two indices j and k to the beginning and the end of the substring, respectively.
            Specifically, j starts at 0, and k starts at i-1.
                It repeatedly swaps the characters at positions j and k, until j and k cross over each other.
            Specifically, while j is less than k, the loop body is executed.
                In each iteration of the loop, it swaps the characters at positions j and k,
            and increments j and decrements k. Specifically, in each iteration,
            the swap function is called with arguments s[j] and s[k],
            and then j is incremented and k is decremented.
                Finally, the loop exits when j becomes greater than or equal to k. */
            for (int j = 0, k = i - 1; j < k; j++, k--) {
                swap(s[j], s[k]);
            }
        }
    }

    cout << s << endl;

    return 0;
}
