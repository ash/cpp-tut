#include <iostream>
#include <utility>
#include <string>

using namespace std;

int main() {
    pair<string, double> p;

    p.first = "pi";
    p.second = 3.14;

    cout << p.first << '=' << p.second << "\n";
}