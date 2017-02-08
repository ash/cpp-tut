#include <iostream>

using namespace std;

// constructor

class MyClass {
    int length;
    int width;

public:
    MyClass() { // replaces default constructor
        cout << "MyClass()\n";
        length = 1;
        width = 1;
    }
    MyClass(int l, int w) { // no return type
        cout << "MyClass(int l, int w)\n";
        length = l;
        width = w;
    }
    void show() {
        cout << "Length = " << length << "\n";
        cout << "Width = " << width << "\n";
    }
};

int main() {
    MyClass b;
    b.show();

    MyClass a(3, 4);
    a.show();
}
