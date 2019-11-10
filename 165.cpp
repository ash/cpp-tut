#include <iostream>

class data {
public:
    int value;
    data() {
        value = 0;
    }
};

void destroy(data* p) {
    delete[] p;
}

void create() {        
    data* p = new data[10];

    p[0].value = 42;
    std::cout << p[0].value << "\n";

    //p = new data[10];

    destroy(p);

    std::cout << p[0].value << "\n";
}

int main() {
    create();
}
