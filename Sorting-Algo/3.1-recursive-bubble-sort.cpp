#include<bits/stdc++.h>
using namespace std;

void bubbleSort (int arr[], int n) {
    if (n == 1) return;

    for (int j = 0; j <= n-2; j++) {
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }
    bubbleSort(arr, n-1);
}

void optimizedBubbleSort (int arr[], int n) {
    if (n == 1) return;

    int didSwap = 0;
    for (int j = 0; j <= n-2; j++) {
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
            didSwap = 1;
        }
    }
    if (didSwap == 0) return;
    optimizedBubbleSort(arr, n-1);
}

int main () {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // bubbleSort(arr, n);
    optimizedBubbleSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

/*
Example 1:
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: After sorting we get 9,13,20,24,46,52

Example 2:
Input: N = 5, array[] = {5,4,3,2,1}
Output: 1,2,3,4,5
Explanation: After sorting we get 1,2,3,4,5
*/

/*
Complexities:
Time: O(n^2) [n=size of array] for worst and average case; O(n) for best case
Space: O(n)
*/