#include <iostream>
#include <math.h>

using namespace std;

class Shape { // absrtact class
public:
    Shape() {}
    virtual double area() = 0; // absrtact method
    virtual double perimeter() = 0;
};

class Rectangle : public Shape {
    double length;
    double width;
public:
    Rectangle(double _length, double _width) {
        length = _length;
        width = _width;
    }
    Rectangle() : Rectangle(0, 0) {} // C++11

    virtual double area() {
        return length * width;
    }
    virtual double perimeter() {
        return 2 * (length + width);
    }
};

class Square : public Shape {
    double side;
public:
    Square(double _side) {
        side = _side;
    }
    Square() : Square(0) {}

    virtual double area() {
        return side * side;
    }
    virtual double perimeter() {
        return 4 * side;
    }
};

class Circle : public Shape {
    double radius;
public:
    Circle(int _radius) {
        radius = _radius;
    }
    Circle() : Circle(0) {}
    virtual double area() {
        return M_PI * radius * radius / 2.0;
    }
    virtual double perimeter() {
        return 2 * M_PI * radius;
    }
};

////////
// Adding a new class

class Star : public Shape {
    int points;
public:
    Star(int _points) {
        points = _points;
    }
    virtual double area() {
        return points * points * 3.14;
    }
    virtual double perimeter() {
        return points * 2;
    }
};

////////

int main() {
    Rectangle r1(10, 3);
    Square s1(7);
    Circle c1(5);

    Star star(5);

    Shape* p1 = &r1;
    Shape* p2 = &star;

    cout << "Area of r1 = " << p1->area() << "\n";
    cout << "Area of r2 = " << p2->area() << "\n";

    // Shape sp; // shape is abstract
}
