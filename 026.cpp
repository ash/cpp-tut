#include <iostream>

using namespace std;

int main() {
    enum colour {red, green, blue, yellow};

    colour c;
    c = blue;
    cout << c << endl;

    enum fruit {apple = 5, pear, peach, banana};
    fruit f = peach;
    cout << f << endl;
}