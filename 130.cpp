#include <iostream>
#include <utility>
#include <string>
#include <vector>

using namespace std;

typedef pair<string, double> str_double;

int main() {
    str_double p;
    p.first = "pi";
    p.second = 3.14;

    str_double e;
    e.first = "e";
    e.second = 2.71;

    vector<str_double> v;
    // vector<pair<string, double>> v;
    v.push_back(p);
    v.push_back(e);

    for (auto x : v) {
    // for (pair<string, double> x : v) {
        cout << x.first << '=' << x.second << "\n";
    }
}