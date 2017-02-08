#include <iostream>

using namespace std;

class Shape {
public:
    virtual int area() = 0;
};

class Circle : public Shape {
    int r;
public:
    Circle(int _r) {r = _r;}
    virtual int area() {return 3.14 * r * r / 2;}
};

class Rectangle : public Shape {
    int w;
    int h;
public:
    Rectangle(int _w, int _h) {w = _w; h = _h;}
    virtual int area() {return w * h;}
};

int main() {
    Circle c(5);
    cout << c.area() << endl;

    Rectangle r(3, 4);
    cout << r.area() << endl;

    //Shape s;
    //cout << s.area() << endl;

    Shape* p;
   // p = &s;
    //cout << p->area() << endl;

    p = &c;
    cout << p->area() << endl; 
}
