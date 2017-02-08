#include <iostream>

using namespace std;

struct Box {
    int length;
    int width;
    int depth;
};

int main() {
    Box b[10] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << b[0].width << ' ' << b[1].depth << endl;

    int size = 10;
    Box* boxes = new Box[size];
    boxes[0].length = 15;
    cout << boxes[0].length << endl;

    delete [] boxes;
}
