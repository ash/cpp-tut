#include <iostream>
#include <string>

using namespace std;

// filter duplictate words from input

int main() {
    string s1;
    string s2;

    cout << "enter a word: ";
    while(cin >> s1) {
        if (s1 != s2) {
            cout << "you typed: " << s1 << endl;
            s2 = s1;
        }
        else {
            cout << "you've just typed that\n";
           
        }
        cout << "enter a word: ";
    }
}
