#include<bits/stdc++.h>
using namespace std;

void explainMultiSet () {
    multiset<int> ms;
    ms.insert(1);      // {1}
    ms.insert(1);      // {1, 1}
    ms.insert(1);      // {1, 1, 1}

    ms.erase(1);

    int cnt = ms.count(1);

    ms.erase(ms.find(1));

    // ms.erase(ms.find(1), ms.find(1));
}

int main () {
    explainMultiSet();
    return 0;
}