#include <iostream>

using namespace std;

struct Box {
    int length;
    int width;
    int depth;
};

int main() {
    Box* p; // pointer to struct
    cout << sizeof(p) << endl;

    p = new Box; // allocate actual space
    cout << sizeof(*p) << endl;

    p->length = 10;
    cout << p->length << endl;

    (*p).length = 20;
    cout << (*p).length << endl;
}
