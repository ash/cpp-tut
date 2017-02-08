#include <iostream>

using namespace std;

class MyClass {
private: // explicit here but is default
    // data members
    int length;
    int width;

public:
    // member functions
    void show() {
        cout << "I'm am a member function of the MyClass.\n";
    }
};

struct MyStruct {
    // data members
    int length;
    int width;

    // member functions
    void show() {
        cout << "I'm am a member function of the MyStruct.\n";
    }
};


int main() {
    MyClass m;
//    m.length = 10;
    m.show();

    MyStruct s;
    s.length = 10;
    s.show();
}
