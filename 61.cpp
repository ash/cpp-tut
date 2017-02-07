#include <iostream>

using namespace std;

// main() arguments

int main(int argc, char* argv[]) {
    cout << argc << endl;

    for (int c = 0; c != argc; c++) {
        cout << argv[c] << endl;
    }
}
