#include <stdio.h>
#include <string.h>

// C strings

int main() {
    char a[] = "one";
    char b[] = "two";
    
    if (!strcmp(a, b)) {
        printf("Equal\n");
    }
    else {
        printf("Not equal\n");
    }
}
