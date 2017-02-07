#include <stdio.h>
#include <stdlib.h>

int main() {
    for(;;) {
        char ch = getchar();
        if(ch == -1) break;
        printf("[%c]\n", ch);
    }
}
