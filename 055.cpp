#include <iostream>
#include <exception>

using namespace std;

int main() {
    try {
        throw 10;
    }
    catch(exception& e) {
        cerr << "exception " << e.what() << endl;
    }
    catch(...) {
        cerr << "... exception" << endl;
    }
}