#include <iostream>

using namespace std;

// built-in data types

int main() {
/*
    int i;
    int j;
    i + j;

    matrix m1;
    matrix m2;
    m1 + m2;
*/

    int i;
    i = 5;
    i = -5;

    // char 2  ==> 00000010
    // char -2 ==> 11111110
    
    signed char s_i = 10;
    signed char s_i2 = -10;
    unsigned char u_i = -10;

    cout << (int) s_i << "\n";
    cout << (int) s_i2 << "\n";
    cout << (int) u_i << "\n";

    short shrt;
    short int shrti;

    long l;
    long int li; // the same

    long long int lli;
    long long ll; // the same, int is assumed

    /*
        char
        short, short int
        int
        long
        long long
    */

    float f;
    double d;
    long double ld;

    bool b;

    NULL;
    nullptr;

    return 0;
}
