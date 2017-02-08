#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, double> m;

    m["pi"] = 3.14;
    m["e"] = 2.71;

    for (map<string, double>::const_iterator iter = m.begin(); iter != m.end(); iter++) {
        cout << iter->first << '=' << iter->second << "\n";
    }
}
