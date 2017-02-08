#include <iostream>

int f() {
    int a = 10;
    return a;
}

int* g() {
    int a = 20;
    return &a; // wrong! returning address of the local variable
}

int* h() {
    int* a = new int(20); // allocates memory
    //int* a = new int;
    //*a = 20;
    return a;
}

int main() {
    int value_f = f();
    int* pointer_g = g();
    int* pointer_h = h(); // to be freed

    std::cout << value_f << ' ' << (*pointer_g) << ' ' << (*pointer_h) << std::endl;

    // delete pointer_g; // cannot do that
    delete pointer_h;

    delete pointer_h; // this is wrong

    pointer_h = nullptr;
    delete pointer_h; // this is fine
}
