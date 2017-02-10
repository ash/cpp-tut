#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
    vector<int> v;

    for (int i = 0; i != 10; i++) {
        v.push_back(rand() % 100);
    }

    v[5] = 33;

    for (vector<int>::iterator x = v.begin(); x != v.end(); x++) {
        cout << *x << "\n";
    }

    cout << "-----\n";

    vector<int>::iterator i = find(v.begin(), v.end(), 33);
    cout << *i << "\n";

    // sort(v.begin(), i + 1);

    // for (vector<int>::iterator x = v.begin(); x != v.end(); x++) {
    //     cout << *x << "\n";
    // }

    // cout << "-----\n";
    // i = find(v.begin(), v.end(), 33);
    // v.erase(i);
    // for (vector<int>::iterator x = v.begin(); x != v.end(); x++) {
    //     cout << *x << "\n";
    // }

    cout << "-----\n";
    v.insert(i, 44);
    for (vector<int>::iterator x = v.begin(); x != v.end(); x++) {
        cout << *x << "\n";
    }
}