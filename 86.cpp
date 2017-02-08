#include <iostream>

using namespace std;

struct Box {
    int length;
    int width;
    int depth;
};

int main() {
    Box box;
    cout << sizeof(box) << endl;

    box.length = 10;
    box.width = 20;
    box.depth = 1;

    cout << box.length << ' ' << box.width << ' ' << box.depth << endl;
    // cout << box << endl;
}
