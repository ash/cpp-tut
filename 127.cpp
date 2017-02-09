#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;

    v.push_back(7);
    v.push_back(9);
    v.push_back(11);

    cout << v.size() << "\n";

    v.pop_back();
    cout << v.size() << "\n";
}
