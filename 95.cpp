#include <iostream>

using namespace std;

class MyClass {
    int length;
    int width;
public:
    void init() {
        length = 10;
        width = 20;
    }
    void init(int l, int w) {
        length = l;
        width = w;
    }
    void show() {
        cout << "Length = " << length << "\n";
        cout << "Width = " << width << "\n";
    }
};

MyClass glob;

int main() {
    glob.show();

    MyClass a;
    a.show();

    a.init();
    a.show();

    a.init(2, 4);
    a.show();    
}
