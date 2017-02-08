#include <iostream>

class C {
    int value;
public:
    C(int n = 0) : value(n) {};
    int getval() const {return value;}
    void show() {std::cout << value << std::endl;}
};

C operator+(const C& c1, const C& c2) {
    C c(c1.getval() + c2.getval());

    return c;
}

int main() {
    C a(5);
    C b(6);

    C d = a + b;
    d.show();
}
