int main() {
    int* i = new int;
    int* p = new int[10];

    delete i;
    delete[] p;
}