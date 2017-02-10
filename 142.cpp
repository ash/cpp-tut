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

    vector<int>::iterator min = min_element(v.begin(), v.end());
    vector<int>::iterator max = max_element(v.begin(), v.end());

    cout << *min << ".." << *max << "\n";
}
