#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>

using namespace std;

int main() {
    stringstream ss;
    ss << 42 << ' ' << "degrees";
    cout << ss.str() << endl;

    const char *c = ss.str().c_str();
    printf("%s\n", c);



    stringstream oo("42 degrees");
    int i;
    string s;
    oo >> i >> s;
    cout << "i = " << i << "\n";
    cout << "s = " << s << "\n";
}
