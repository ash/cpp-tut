#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;

    cout << "size = " << v.size() << "\n";
    cout << "is empty = " << v.empty() << "\n";

    for (int i = 0; i != 10; i++) {
        v.push_back(i);
    }

    cout << "size = " << v.size() << "\n";
    cout << "is empty = " << v.empty() << "\n";

    for (int i = 0; i != 10; i++) {
        cout << v[i] << "\n";
    }

    v[4] = 111;
    v.at(5) = 222;

    for (auto x : v) {
        cout << x << "\n";
    }
}
