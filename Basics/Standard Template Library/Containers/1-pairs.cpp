#include<bits/stdc++.h>
using namespace std;

void explainPair () {

    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second;
    // Output: 1 3
    
    pair<int, pair<int, int>> q = {1, {3, 4}};
    cout << q.first << " " << q.second.first << " " << q.second.second;
    // Output: 1 3 4
    
    pair<int, int> arr[] = {{1,2},{2,5},{6,1}};
    cout << arr[1].second;
    // Output: 5
}

int main () {
    explainPair();
    return 0;
}