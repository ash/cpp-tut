#include <iostream>

using namespace std;

void g1(int *p) {
    *p = 100; // change the value of the variable

    int a = 20;
    p = &a; // change the value of the pointer   
}

void g2(const int *p) {
    // *p = 100; // cannot change the variable

    int a = 20;
    p = &a; // can change pointer (locally)
}

void g3(int * const p) {
    *p = 100; // modify the variable using a pointer

    int a = 20;
    // p = &a; // attempt to modify the constant pointer
}

void g4(const int * const p) {
    // *p = 100; // cannot modify a value passed by pointer

    int a = 20;
    // p = &a; // also cannot modify the pointer itself
}

int main() {
    int x = 42;
    g1(&x);
    cout << x << endl; // 100

    int y = 42;
    g2(&y);
    cout << y << endl; // 42

    int z = 42;
    g3(&z);
    cout << z << endl; // 100

    int a = 42;
    g4(&a);
    cout << a << endl; // 42
}
