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

    for (vector<int>::iterator x = v.begin(); x != v.end(); x++) {
        cout << *x << "\n";
    }
    
    sort(v.begin(), v.end());

    for (vector<int>::iterator x = v.begin(); x != v.end(); x++) {
        cout << *x << "\n";
    }
}