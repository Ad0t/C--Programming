#include<bits/stdc++.h>
using namespace std;

bool isSorted (int arr[], int n) {
    if (n<=1) return true;
    return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
}

int main () {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "The array is(1=sorted)\t" << isSorted(arr, n) << endl;
}