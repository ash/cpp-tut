#include <iostream>
#include <string>

using namespace std;

class MyStr {
    string s;
public:
    MyStr(string);
    void set(string);
    void show() const;
    friend void reset(MyStr&);
};

MyStr::MyStr(string n) {
    s = n;
}

void MyStr::set(string n) {
    s = n;
}

void MyStr::show() const {
    cout << s << endl;
}

void reset(MyStr& c) {
    c.s = "Default";
}

int main() {
    MyStr c("My str");
    c.show();

    c.set("New str");
    c.show();

    reset(c);
    c.show();
}
