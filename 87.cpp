#include <iostream>

using namespace std;

struct Box {
    int length;
    int width;
    int depth;
} box1, box2; // global vars

struct {
    int w;
    int h;
} a, b; // global var with anonymous struc

int main() {
    box1.length = 10;
    cout << box1.length << endl;

    a.w = 5;
    cout << a.w << endl;
}
