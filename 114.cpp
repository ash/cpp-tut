#include <iostream>
#include <math.h>

using namespace std;

// 1) length, width
// 2) location (points of one corner)
// 3) coordinates of two corners
// 4) rotation
class Rectangle {
    double length;
    double width;
public:
    Rectangle(double _length, double _width) {
        length = _length;
        width = _width;
    }
    Rectangle() : Rectangle(0, 0) {} // C++11

    double area() {
        return length * width;
    }
    double perimeter() {
        return 2 * (length + width);
    }
};

// 1) radius
// 2) location (position of the center)
class Circle {
    double radius;
public:
    Circle(int _radius) {
        radius = _radius;
    }
    Circle() : Circle(0) {}
    double area() {
        return M_PI * radius * radius / 2.0;
    }
    double perimeter() {
        return 2 * M_PI * radius;
    }
};

int main() {
    Rectangle r1(10, 3);
    Rectangle r2;

    cout << "Area of r1 = " << r1.area() << "\n";
    cout << "Area of r2 = " << r2.area() << "\n";

    cout << "Perimeter of r1 = " << r1.perimeter() << "\n";
    cout << "Perimiter of r2 = " << r2.perimeter() << "\n";

    Circle c1(5);
    cout << "Area of c1 = " << c1.area() << "\n";
    cout << "Perimeter of c1 = " << c1.perimeter() << "\n";
}
