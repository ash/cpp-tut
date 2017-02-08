#include <iostream>

using namespace std;

struct s1 {
    int a;
    float b;
};

struct s2_t {
    int a;
    float b;
} s2;

struct {
    int a;
    float b;
} s3;

struct x_t {
    int a;
    int b;
};

struct ini_t {
    int a = 30;
    int b[2] = {10, 20};
};

int main() {
    s1 s1;
    s1.a = 10;
    s1.b = 3.14;
    cout << s1.a << ' ' << s1.b << endl;

    s2.a = 11;
    s2.b = 3.15;
    cout << s2.a << ' ' << s2.b << endl;

    s3.a = 12;
    s3.b = 3.16;
    cout << s3.a << ' ' << s3.b << endl;

    x_t* p;
    p = new x_t;
    p->a = 20;
    p->b = 21;
    cout << p->a << ' ' << p->b << endl;
    delete p;

    ini_t i;
    cout << i.a << ' ' << i.b[0] << ' ' << i.b[1] << endl;

    ini_t j[10];
    cout << sizeof(j) << endl;
}
