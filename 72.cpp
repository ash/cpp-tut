#include <iostream>

using namespace std;

// pointer arithmetic

int main() {
    int a[10];
    
    a[3] = 100;

    cout << sizeof(int) << endl;
    cout << sizeof(a) << endl;

    int* p = &a[1];
    *p = 55;
    cout << a[1] << endl;
    
    int* q = a;
    q[1] = 33;
    cout << a[1] << endl;

    *q = 10;
    cout << a[0] << endl;

    q++;
    *q = 20;
    cout << a[1] << endl;

    a[5] = 56;
    cout << a[5] << endl;
    cout << 5[a] << endl;

    *(a + 5) = 57;
    *(5 + a) = 57;
    cout << a[5] << endl;
}
