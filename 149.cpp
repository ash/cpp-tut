#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

void f(const char* p) {
    printf("%s\n", p);
}

class mystring {
   // int i;
    string prefix;
    string str;
public:
    operator const char*() {
        return str.c_str();
    }

    mystring(string _s) {
       // i = 100;
        prefix = "this is prefix";
        str = _s;
    }
};

int main() {
    string s ("my string");
    //f((const char*) &s);

    mystring ms(s);
    f((const char*) &ms);

    f(s.c_str());
}
