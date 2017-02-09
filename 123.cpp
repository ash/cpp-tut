#include <iostream>

using namespace std;

class matrix {
    int width;
    int height;
    int* data;
    inline int offset(int x, int y) {
        return x + y * width;
    }
public:
    matrix(int w, int h) {
        width = w;
        height = h;
        data = new int[w * h];
    }
    int get_width() {return width;}
    int get_height() {return height;}
    void set(int x, int y, int value) {
        data[offset(x, y)] = value;
        //data[x + y * width] = value;
    }
    int get(int x, int y) {
        return data[offset(x, y)];
    }
    int& elem(int x, int y) {
        return data[offset(x, y)];
    }
    void debug_display() {
        int datasize = width * height;
        for (int i = 0; i != datasize; i++) {
            cout << data[i];
            if (i != datasize - 1)
                cout << ' ';
        }
    }
    // void add(matrix& b) {        
    //     for (int i = 0; i != width * height; i++) {
    //         this->data[i] += b.data[i];
    //     }
    // }    
};

//matrix add_matrices(matrix& a, matrix& b) {
matrix operator+(matrix& a, matrix& b) {
    matrix m(a.get_width(), a.get_height());

    for (int c = 0; c != a.get_width(); c++) {
        for (int r = 0; r != a.get_height(); r++) {
            m.elem(c, r) = a.elem(c, r) + b.elem(c, r);
        }
    }

    return m;
}

ostream& operator<<(ostream& o, matrix& m) {
    m.debug_display();
    // debug_display uses cout but you'd better use o here
    
    return o;
}

int main() {
    matrix a(2, 1);
    // a.set(0, 0, 4);
    // a.set(1, 0, 5);
    a.elem(0, 0) = 4;
    a.elem(1, 0) = 5;
//    a.debug_display();

    matrix b(2, 1);
    b.elem(0, 0) = 7;
    b.elem(1, 0) = 3;

    matrix c(2, 1);
    //c = add_matrices(a, b);
    c = a + b;

    cout << c << endl;

    // cout << 42 << 43;
    // operator<<(operator<<(cout, 42), 43);
}
