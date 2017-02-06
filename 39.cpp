#include <iostream>
#include <string>

using namespace std;

// multi-line strings

int main() {
    string s = "string\nline 2";
    cout << s << "\n";

    string s1 = "string\n"
    "line 2";
    cout << s1 << "\n";

    string s2 = "string\n\
line 2";
    cout << s2 << "\n";

    // C++11
    // raw sring
    string s3 = R"(my \t\n multi-

line sring)";
    cout << s3 << "\n";

    string s4 = R"^^^(hello world)^^^";
    cout << s4 << "\n";
}
