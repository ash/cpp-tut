#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// class C {
    
// };
// ostream& operator<< (ostream& o, const C&);

int main() {
    ifstream ifs;
    ifs.open("data.txt");
    
    ofstream ofs;
    ofs.open("data-copy.txt");

    string s;
    while(!ifs.eof()) {
        getline(ifs, s);
        ofs << s << "\n";
    }

    ifs.close();
    ofs.close();
}