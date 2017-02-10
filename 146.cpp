#include <iostream>
#include <map>
#include <string>
#include <list>

using namespace std;

int main() {
    map<string, double> m;

    m["pi"] = 3.14;
    m["e"] = 2.71;
    m["pi"] = 3.1415926;
    m["2pi"] = 6.28;

    cout << m["pi"] << "\n";
    cout << m["e"] << "\n";

    for (map<string, double>::iterator i = m.begin(); i != m.end(); i++) {
        cout << i->first << '=' << i->second << "\n";
    }


    // sorting by keys

    m["q"] = 10;
    m["a"] = 20;

    list<string> keys;
    for (map<string, double>::iterator i = m.begin(); i != m.end(); i++) {
        keys.push_back(i->first);
    }

    keys.sort();

    for (list<string>::iterator k = keys.begin(); k != keys.end(); k++) {
        cout << "value of " << *k << " is " << m[*k] << "\n";
    }
}