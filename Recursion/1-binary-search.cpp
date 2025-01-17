#include<bits/stdc++.h>
using namespace std;

int binarySearch_helper (vector<int>&arr, int tar, int start, int end) {
    if (start <= end) {
        int mid = start + (end-start)/2;

        if (arr[mid] == tar) return mid;
        else if (arr[mid] <= tar) {
            return binarySearch_helper(arr, tar, mid+1, end);
        } else {
            return binarySearch_helper(arr, tar, start, mid-1);
        }
    }
    return -1;
}

int binarySearch (vector<int>&arr, int tar) {
    return binarySearch_helper(arr, tar, 0, arr.size()-1);
}

int main () {
    vector<int> arr = {-1, 0, 3, 5, 9, 11, 12, 20};
    int tar = 9;
    int res = binarySearch(arr, tar);
    cout << tar << " is at "<< res << endl;
    return 0;
}