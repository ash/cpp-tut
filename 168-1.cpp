#include <iostream>
#include <thread>
#include <mutex>

int counter;
std::mutex mu;

void f() {
    for (int c = 0; c != 100000; c++) {
        mu.lock(); // makes it slow; try moving outside of a loop
        counter++;
        mu.unlock();
    }
}

int main() {
    std::thread thread_a {f};
    std::thread thread_b {f};

    thread_a.join();
    thread_b.join();

    std::cout << counter << std::endl;
}
