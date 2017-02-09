#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {
    vector<int> v;
    int a[10];

    for (int i = 0; i != 10; i++) {
        int r = rand() % 100;
        v.push_back(r);
        a[i] = r;
    }

    for (auto x : v) cout << x << ' ';
    cout << "\n";

    for (int i = 0; i != v.size(); i++) {
        cout << v[i] << ',' << a[i] << ' ';
    }
    cout << "\n";

    int* p = a;
    for (int i = 0; i != 10; i++) {
        cout << *p << ' ';
        p++;
    }
    cout << "\n";
    
    for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
        cout << *iter << ' ';
    }
    cout << "\n";

    for (auto iter = v.begin(); iter != v.end(); iter++) {
        cout << *iter << ' ';
    }
    cout << "\n";

    for (vector<int>::const_iterator iter = v.begin(); iter != v.end(); iter++) {
        //*iter *= 2;
        cout << *iter << ' ';
    }
    cout << "\n";
}