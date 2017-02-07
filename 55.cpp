#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 20;

    int c = a++ + ++b;
    cout << c << endl; // 31

    int d = -a;
    cout << d << endl; // -11


    int* pa = &a;
    int* pb = &b;

    int e = a * b; // 11 * 21 = 231
    cout << e << endl;

    int f = *pa * *pb;
    cout << f << endl; // 231

    int g = *pa**pb;
    cout << g << endl; // 231
}
