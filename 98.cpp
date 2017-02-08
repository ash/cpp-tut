#include <stdio.h>

// getter, setter

class C {
    char* s;
public:
    void set(char* _s) {
        s = _s;
    }
    char* get() {
        return s;
    }
};

int main() {
    C c;
    char str[] = "abc";
    c.set(str);

    puts(c.get());
}
