#include <iostream>
#include <string>

using namespace std;

// range-based for loop
// C++11

int main() {
    string s = "abcde";
    for (char ch : s) {
        cout << ch << "\n";
    }    

    for (auto ch : s) {
        cout << ch << "\n";
    } 
}
