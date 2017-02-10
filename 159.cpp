#include <iostream>
#include <exception>

using namespace std; 

int main() {
    try {
        for (;;) {
            int *p = new int[3847574839];
        }
    }
    catch(exception& e) {
        cerr << "Exception: " << e.what() << "\n";
    }
}