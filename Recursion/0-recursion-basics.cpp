#include<bits/stdc++.h>
using namespace std;

void reccFunc1(int i, int n) {
    if (i > n) {
        return;
    }
    cout << "RAJ" << endl;
    reccFunc1(i+1, n);
}

void reccFunc2(int i, int n) {
    if (i > n) {
        return;
    }
    cout << i << endl;
    reccFunc2(i+1, n);
}
void reccFunc3(int i, int n) {
    if (i > n) {
        return;
    }
    reccFunc3(i+1, n);
    cout << i << endl;
}
void sumRecc1(int n, int sum) {
    if (n < 1) {
        cout << sum << endl;
        return;
    }
    sumRecc1(n - 1, sum + n);
}
int sumRecc2(int n) {
    if (n == 0) {
        return 0;
    }
    return (n + sumRecc2(n-1));
}


