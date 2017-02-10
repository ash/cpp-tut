#include <sstream>
#include <string>
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    stringstream ss;
    ss << 42 << ' ' << "string value\n";

    string s = ss.str();
    cout << s << "\n";

    printf("%s", ss.str().c_str());


    int i;
    string a, b;
    ss >> i >> a >> b;
    cout << "i=" << i << '\n';
    cout << "a=" << a << '\n';
    cout << "b=" << b << '\n';
}