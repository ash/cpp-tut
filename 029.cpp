#include <iostream>

using namespace std;

struct s {
    int x;
    char c;
};

union u {
    char str[10];
    int a;
};

int main() {
    s s;
    s.x = 14;
    s.c = 'b';
    cout << s.x << ' ' << s.c << endl;
    
    cout << sizeof(u) << endl;    
    u u;
    u.str[0] = 0;
    u.str[1] = 1;
    u.str[2] = 0;
    u.str[3] = 0;
    u.str[4] = 0;
    cout << u.str << endl;
    cout << u.a << endl;
}
