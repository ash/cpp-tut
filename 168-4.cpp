#include <atomic>

std::atomic<int> counter;

void function() {
    counter++;
}

int main() {
    function();
}
