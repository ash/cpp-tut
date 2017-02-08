#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    v.resize(10);
    for (int c = 0; c != 1000; c++) {
        cout << v.size() << "\t" << v.capacity() << "\t" << &(v[0]) << "\n";
        v.push_back(c);
    }

    cout << v.size() << endl;
    v.pop_back();
    cout << v.size() << endl;
}
