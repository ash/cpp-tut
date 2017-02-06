#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    cout << argc << " arguments\n";
    for (int c = 0; c != argc; c++) {
        cout << c << ": " << argv[c] << "\n";
    }
}
