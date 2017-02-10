#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    try {
        throw 10;
    }
    catch(...) {
        cerr << "Catched\n";
    }

    try {
        throw 10;
    }
    catch(int i) {
        cerr << "Catched int " << i << "\n";
    }
    catch(string s) {
        cerr << "Catched s " << s << "\n";
    }

    try {
        throw string("Hey");
    }
    catch(int i) {
        cerr << "Catched int " << i << "\n";
    }
    catch(string s) {
        cerr << "Catched string " << s << "\n";
    }
}