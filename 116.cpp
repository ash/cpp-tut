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

class Square {
    double side;
public:
    Square(double _side) {
        side = _side;
    }
    Square() : Square(0) {}

    double area() {
        return side * side;
    }
    double perimeter() {
        return 4 * side;
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
    Circle c1(5);
    Square s1(7);

    // int i;
    // int* a[10];
    // a[0] = &i;    

    Rectangle rectangles[10];
    rectangles[0] = r1;
    //rectangles[1] = c1;

    Rectangle* rectangles_p[10];
    rectangles_p[0] = &r1;
    rectangles_p[1] = (Rectangle*) &c1;

    cout << rectangles_p[0]->area() << "\n";
    cout << rectangles_p[1]->area() << "\n"; // wrong

}
