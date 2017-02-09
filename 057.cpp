#include <iostream>
#include <exception>

using namespace std;

int main() {
    try {
        for(int i = 0; i != 1000; i++) {
            int* p = new int[1234958403205L];
            p[12343234] = 12;
        }
    }
    catch(exception& e) {
        cerr << "exception " << e.what() << endl;
    }
    catch(...) {
        cerr << "... exception" << endl;
    }
}