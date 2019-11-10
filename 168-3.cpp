#include <iostream>
#include <thread>
#include <atomic>

std::atomic<int> counter;
// std::atomic_int counter;

void f() {
    for (int c = 0; c != 100000; c++) {
        counter++;
    }
}

int main() {
    std::thread thread_a {f};
    std::thread thread_b {f};

    thread_a.join();
    thread_b.join();

    std::cout << counter << std::endl;

    std::cout << counter.is_lock_free() << std::endl;
}
