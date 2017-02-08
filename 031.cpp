#include <iostream>

using namespace std;

class X {
    static int counter;
    int n;
public:
    X() {
        counter++;
        n = counter;
        cout << "X(" << counter <<") \n";
    }
    void say() {
        cout << n << endl;
    }
};

int X::counter = 0;

int main() {
    X x1;
    x1.say();

    X x2;
    x2.say();

    X x[10];
    for (int c = 0; c != 10; c++)
        x[c].say();
}
