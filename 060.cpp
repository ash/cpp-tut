#include <iostream>
#include <cstdarg>

using namespace std;

double sum(int n, ...) {
    va_list list;
    va_start(list, n);

    double sum = 0;
    for (int i = 0; i != n; i++) {
        double a = va_arg(list, double);
        cout << a << endl;
        sum += a;
    }
    va_end(list);

    return sum;
}

int main() {
    cout << sum(5, 11.2, 20.5, 30.0, 3.14, 2.71) << endl;
}
