#include<bits/stdc++.h>
using namespace std;

void explainVector () {
    /*
    size: no. of elements
    capacity: no. of elements it can hold(doubles as it increases)
    push_back: assumes the datatype is same and adds to the last
    pop_back: removes from the last
    emplace_back:
    at() or []
    front & back 
    */
    vector<int> v1;
    
    v1.push_back(1);//{1}
    for (int val : v1) cout << val << " ";
    cout << "\t\tSize:"<< v1.size() << endl;// 1

    v1.emplace_back(2);//{1, 2}
    for (int val : v1) cout << val << " ";
    cout << "\tSize:"<< v1.size();// 2
    cout << "\tCapacity:"<< v1.capacity() << endl;// 2
    
    v1.emplace_back(2);//{1, 2, 2}
    for (int val : v1) cout << val << " ";
    cout << "\tSize:"<< v1.size();// 3
    cout << "\tCapacity:"<< v1.capacity() << endl;// 4

    for (int val : v1) {
        cout << val << " ";
    }
    cout << endl;
    cout << "Value at index 2: " << v1[2] << " or " << v1.at(2) << endl;
    cout << "Value at front:\t" << v1.front() << "\tand at last:\t" << v1.back() << endl;


    vector<pair <int, int>> v2;
    v2.push_back({1,2});
    v2.emplace_back(1,2);

    vector<int> v3(5, 100);//{100, 100, 100, 100, 100}
    vector<int> v4(5);//{0,0,0,0,0} or garbage value

    vector<int> v5(5, 20);//{20,20,20,20,20}
    vector<int> v6(v5);//{20,20,20,20,20} copied

    //iterators
    vector<int> v7 = {20, 10, 15, 6, 7};//contigious memory

    vector<int>::iterator it = v7.begin();//points to memory address
    cout << *(it) << " ";// * - to accessing the element in the memory address

    it++;
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) << " ";
    cout << endl;
    // vector<int>::iterator it = v.end();
    // vector<int>::iterator it = v.rend();
    // vector<int>::iterator it = v.rbegin();

    cout << v7[0] << " " << v7.at(0) << endl;
    cout << v7.back() << " ";
    cout << endl;


    for (vector<int>::iterator it = v7.begin(); it != v7.end(); it++) {
        cout << *(it) << " ";
    }
    for (auto it = v7.begin(); it != v7.end(); it++) {
        cout << *(it) << " ";
    }
    for (auto it : v7) {
        cout << it << " ";
    }

    // {1,2,3,4,5,6}
    v7.erase(v7.begin()+1);
    // {1,3,4,5,6}
    v7.erase(v7.begin()+2, v7.begin()+4);
    // {1,5,6}

    // Insert
    vector<int> v (2, 100);             // {100, 100}
    v.insert(v.begin(), 300);           // {300, 100, 100}
    v.insert(v.begin() + 1, 2, 200);    // {300, 200, 200, 100, 100}

    vector<int> copy(3, 50);    // {50, 50, 50}
    v.insert(v.begin(), copy.begin(), copy.end());   //{50, 50, 50, 300, 200, 200, 100, 100}

    // {10, 20}
    cout << v.size(); // 2
    // {10, 20}
    v.pop_back(); // 10

    vector<int> v11 = {10, 20};
    vector<int> v22 = {30, 40};
    v11.swap(v22);    // v11 = {30, 40}, v22 = {10, 20}

    v.clear();      // erases the entire vector

    cout << v.empty();
}


int main () {
    explainVector();
    return 0;
}