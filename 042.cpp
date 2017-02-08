#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    typedef vector<int> vi;
    vi v;

    for (int i = 0; i != 10; i++) {
        v.push_back(i * 3);
    }

    vi::iterator pos = find(v.begin(), v.end(), 15);
    v.insert(pos, 100);
    v.erase(pos - 1);

    for (vi::const_iterator iter = v.begin(); iter != v.end(); iter++) {
        cout << *iter << "\n";
    }
}
