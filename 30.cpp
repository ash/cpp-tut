#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1;
    string s2;

    while(1) {
        cout << "enter a word: ";
        cin >> s1;
        if (s1 != s2) {
            cout << "you typed: " << s1 << endl;
            s2 = s1;
        }
        else {
            cout << "you've just typed that\n";
           
        }
    }
}
