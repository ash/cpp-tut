#include <iostream>

using namespace std;

namespace myspace {
    void myhidden() {
        cout << "hello\n";
    }
}

using namespace myspace;

int main() {
    cout << "cout\n";

    myhidden();
}
