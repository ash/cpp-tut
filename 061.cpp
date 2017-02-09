#include <iostream>

using namespace std;

extern "C" int sum(int, int);
extern "C" double sum_d(double, double);

int main() {
    cout << sum(5, 7) << "\n";
    cout << sum_d(3.14, 2.71) << "\n";
}