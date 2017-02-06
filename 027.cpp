#include <iostream>

using namespace std;

int main() {
    enum class colour : char {red = 'r', green = 'g', blue = 'b', yellow = 'y'};
    colour c = colour::blue;
    if (c != colour::red) {
        cout << "not red\n";
    }
}