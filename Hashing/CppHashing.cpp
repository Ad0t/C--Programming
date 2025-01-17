#include<bits/stdc++.h>
using namespace std;

int hash1 () {
    //number hashing
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i < n; i++) {
        cin >> arr[i];
    }

    // precompute
    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        // fetch
        cout << hash[number] << endl;
    }
/*
5
1 3 2 1 3
5
1
4
2
3
12
*/
}
int hash2 () {
    //alphabet hashing
    string s;
    cin >> s;

    // pre compute
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i]]++;
    }
    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        // fetch
        cout << hash[c] << endl;
    }
    return 0;
/*
abcdefghia
5
a
j
p
b
q
*/
}

int hashmap1 () {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // precompute
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    /*
    // precompute
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    */
    
    
    // iterator in map
    for (auto it : mpp) {
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        // fetch
        cout << mpp[number] << endl;
    }
    return 0;
}

int hashmap2 () {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // precompute
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    /*
    // precompute
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    */
    
    
    // iterator in map
    // for (auto it : mpp) {
    //     cout << it.first << "->" << it.second << endl;
    // }

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        // fetch
        cout << mpp[number] << endl;
    }
    return 0;
}

int main () {
    // hash1();
    // hash2();
    hashmap1();
    hashmap2();
    return 0;
}