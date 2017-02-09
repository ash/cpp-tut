#include <iostream>
#include <exception>

using namespace std;

class myex_t: public exception {
    virtual const char* what() const throw() {
        return "Hey there";
    }
} myex;

int main() {
    try {
        throw myex;
    }
    catch(exception& e) {
        cerr << "exception " << e.what() << endl;
    }
    catch(...) {
        cerr << "... exception" << endl;
    }
}