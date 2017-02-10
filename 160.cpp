#include <iostream>
#include <exception>

using namespace std; 

int main() {
    try {
        int a = 10;
        int b = 0;
        int z = a / b;
    }
    catch(exception& e) {
        cerr << "Exception: " << e.what() << "\n";
    }
}