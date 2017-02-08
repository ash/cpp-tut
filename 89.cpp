#include <iostream>

using namespace std;

struct Box {
    int length;
    int width;
    int depth;
};

int main() {
    Box b = {10, 20, 30};
    cout << b.length << ", " << b.width << ", " << b.depth << "\n";
}
