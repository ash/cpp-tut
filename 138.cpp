extern "C" void summate_(int* a, int* b);

int main() {
    int a = 7;
    int b = 9;
    summate_(&a, &b);
}
