#include <iostream>
#include <string>

using namespace std;

void f1() {
    throw 123;
}

void f2() {
    throw string("string");
}

void f3() {
    throw nullptr;
}

int main() {
    try {
        f1();
        f2();
        f3();
    }
    catch (int e) {
        cerr << "int e = " << e << endl;
    }
    catch (string s) {
        cerr << "string s = " << s << endl;
    }
    catch (...) {
        cerr << "default exception" << endl;
    }

    try {
        f2();
        f1();
        f3();
    }
    catch (int e) {
        cerr << "int e = " << e << endl;
    }
    catch (string s) {
        cerr << "string s = " << s << endl;
    }
    catch (...) {
        cerr << "default exception" << endl;
    }

    try {
        f3();
        f2();
        f1();
    }
    catch (int e) {
        cerr << "int e = " << e << endl;
    }
    catch (string s) {
        cerr << "string s = " << s << endl;
    }
    catch (...) {
        cerr << "default exception" << endl;
    }

    try {
        int x = 0;
        int y = 10;

        int z = y / x;
    }
    catch (...) {
        cout << "exception" << endl;;
    }
}