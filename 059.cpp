#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
    vector<int> v;
    for (auto i = 0; i != 10; i++)
        v.push_back(rand() % 100);

    for (auto x : v)
        cout << x << "\n";
    
    auto iter_min = min_element(v.begin(), v.end());
    cout << "min=" << *iter_min << "\n";

    auto iter_max = max_element(v.begin(), v.end());
    cout << "max=" << *iter_max << "\n";
}
