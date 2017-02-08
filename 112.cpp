#include <iostream>

using namespace std;

// static data members

class C {
    static int counter;
public:
    C() {
        counter++;
    }
    void show() {
        cout << counter << endl;
    }
    static void how_many() {
        cout << "Created: " << counter << endl;
    }
};

int C::counter = 0;

int main() {    
    for (int i = 0; i != 10; i++) {
        C c;
        c.show();
        //c.show();
    }

    C::how_many();
    cout << sizeof(C) << endl;
}
