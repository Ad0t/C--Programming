#include<bits/stdc++.h>
using namespace std;


// Optimized O(n)
void findLargest (int arr[], int n) {
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    cout << "Largest is:\t" << largest;
}

int main () {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    findLargest(arr, n);
    return 0;
}