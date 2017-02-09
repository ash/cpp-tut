#include <iostream>
#include <math.h>

using namespace std;

class Shape {
public:
    Shape() {}
    double area() {
        return 0;
    }
    double perimeter() {
        return 0;
    }
};

// 1) length, width
// 2) location (points of one corner)
// 3) coordinates of two corners
// 4) rotation
class Rectangle : public Shape {
protected:
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

class Square : public Rectangle {
public:
    Square(double _side) : Rectangle(_side, _side) {
        // length = _side;
        // width = _side;
    }
    Square() : Square(0) {}   
    void double_me() {
        length *= 2;
        width *= 2;
    }
};

// 1) radius
// 2) location (position of the center)
class Circle : public Shape {
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
    Square s1(7);

    cout << "Area of s1 = " << s1.area() << "\n";
    cout << "Perimiter of s1 = " << s1.perimeter() << "\n";

    s1.double_me();

    cout << "Area of s1 = " << s1.area() << "\n";
    cout << "Perimiter of s1 = " << s1.perimeter() << "\n";
}
