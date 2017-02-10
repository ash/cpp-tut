#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream ofs;
    //ofs.open("data.txt", ofstream::app);
    ofs.open("data.txt");
    ofs << 42 << "\n";
    ofs << "string" << "\n";
    ofs.close();

    ifstream ifs;
    ifs.open("data.txt");
    int i;
    string s;
    ifs >> i >> s;
    ifs.close();

    cout << "i=" << i << ", s=" << s << "\n";
}