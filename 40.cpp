#include <iostream>
#include <string>

using namespace std;

// strings and chars

int main() {
    string s = "abc";
    char a[] = "abc";
    char b[4] = "abc";
    char c[10] = "abc";
    char d[10] = {'a', 'b', 'c', 0};

    cout << s << a << b << c << d << endl;    
}
