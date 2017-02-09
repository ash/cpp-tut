#include <iostream>
#include <math.h>

using namespace std;

// struct Point {
//     double x;
//     double y;
// };

// inheritance is is-a
// rectangle is a shape
// use properties if it does-a
// gog is an animal
// dog does bark

class Shape {
// protected:
//     Point location;
public:
    Shape() {}
    virtual double area() {
        return 0;
    }
    virtual double perimeter() {
        return 0;
    }
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

// class MyShape : public Circle, Square {

// };



int main() {
    Rectangle r1(10, 3);
    Square s1(7);
    Circle c1(5);

    // Shape shapes[10];
    // shapes[0] = r1;
    // shapes[1] = s1;
    // shapes[2] = c1;

    // cout << "Shape of r1 = " << shapes[0].area() << "\n";
    // cout << "Shape of s1 = " << shapes[1].area() << "\n";
    // cout << "Shape of c1 = " << shapes[2].area() << "\n";


    Shape* shapes_p[10];
    shapes_p[0] = &r1;
    shapes_p[1] = &s1;
    shapes_p[2] = &c1;

    cout << "Shape of r1 = " << shapes_p[0]->area() << "\n";
    cout << "Shape of s1 = " << shapes_p[1]->area() << "\n";
    cout << "Shape of c1 = " << shapes_p[2]->area() << "\n";
}
