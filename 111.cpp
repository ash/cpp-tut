class MyClass {
public:
    void my_meth() {} // __ZN7MyClass7my_methEv
    friend void my_friend(); // __Z9my_friendv
};

void my_friend() {
}

int main() {
    MyClass s;
    s.my_meth();
    my_friend();
}
