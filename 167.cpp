#include <iostream>
#include <thread>

void a() {
    std::cout << "void a()\n";
}

void b() {
    std::cout << "void b()\n";
}

int main() {
    std::thread thread_a {a};
    std::thread thread_b {b};

    thread_a.join();
    thread_b.join();
}
