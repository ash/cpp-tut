#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;

    v.reserve(1000);
    for (int i = 0; i != 1500; i++) {
        v.push_back(i*2);
        cout << v.size() << '\t' << v.capacity() << '\t' << &(v[0]) <<  "\n";
    }

    cout << v.max_size() << "\n";

    v.resize(500);
    cout << v.size() << '\t' << v.capacity() << '\t' << &(v[0]) <<  "\n";

    // v.clear();
    // cout << v.size() << '\t' << v.capacity() << endl;

    // int *p = &v[0];
    // p += 434; 
    // cout << *p << endl;

    v.shrink_to_fit();
    cout << v.size() << '\t' << v.capacity() << '\t' << &(v[0]) <<  "\n";
}
