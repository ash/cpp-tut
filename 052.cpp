#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream i;
    i.open("052.cpp");
    string s;
    while (!i.eof()) {
        i >> s;
        cout << s << "\n";
    }
    i.close();


    ifstream j;
    j.open("052.cpp");
    string t;
    while (getline(j, t)) {
        cout << t << "\n";
    }
    j.close();


    ofstream o;
    o.open("./1.txt", ofstream::out);
    o << 123 << "\n";
    o.close();
}