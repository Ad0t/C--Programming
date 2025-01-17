#include<bits/stdc++.h>
using namespace std;

// Naive approach
int nthFibonacci_one (int n) {
    if (n <= 1) {
        return n;
    }
    return nthFibonacci_one(n-1) + nthFibonacci_one(n-2);
}
/*
Complexities:
Time: O(2^n)
Auxiliary Space: O(n)
*/



// Memoization approach
int nthFibonacci_two_helper (int n, vector<int> &memo) {
    if (n <= 1) {
        return n;
    }
    if (memo[n] != -1) {
        return memo[n];
    }
    return memo[n] = nthFibonacci_two_helper(n-1, memo) + nthFibonacci_two_helper(n-2, memo);
}
int nthFibonacci_two (int n) {
    vector<int> memo(n + 1, -1);
    return nthFibonacci_two_helper(n, memo);
}
/*
Complexities:
Time: O(n)
Auxiliary Space: O(n)
*/



int main () {
    int n;
    cin >> n;
    cout << nthFibonacci_one(n) << endl;
    cout << nthFibonacci_two(n) << endl;
}
