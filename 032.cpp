#include <iostream>
#include <string.h>

using namespace std;

class C {
    char* s;
public:
    C();
    C(char*);
    C(const C&);
    ~C();
    void show();
};

C::C() {
    s = nullptr;
}

C::C(char* s) {
    this->s = new char[strlen(s) + 1];
    strcpy(this->s, s);
}

//C::C(const C &that) : C(that.s) {   
//}

C::C(const C &that) {
    this->s = new char[strlen(that.s) + 1];
    strcpy(this->s, that.s);
}

C::~C() {
    delete s;
}

void C::show() {
    cout << s << endl;
}

int main() {
    char x[] = "abc";
    C c(x);
    c.show();

    C d(c);
    d.show();

    C n = C(x);
    n.show();
}
