#include <iostream>
#include <exception>

using namespace std; 

class MyExc : public exception {
public:
    virtual const char* what() const throw() {
        return "Hello there!";
    }
} mye;

int main() {
    try {
        throw mye;
    }
    catch(exception& e) {
        cerr << e.what() << "\n";
    }
}