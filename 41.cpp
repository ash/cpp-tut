#include <iostream>

using namespace std;

// pointers

int main() {
    int variable = 42;

    int* pointer;
    pointer = &variable;
    
    cout << pointer << endl;

    int dereferenced_variable = *pointer;
    cout << dereferenced_variable << endl;

    int* p1;
    int *p2;

    *pointer = 43;
    cout << *pointer << endl;

    *pointer = 44;
    cout << variable << endl;
}
