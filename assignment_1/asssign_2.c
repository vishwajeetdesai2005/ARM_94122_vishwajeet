#include <stdio.h>

void displayBinary(unsigned int n) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);  
        if (i % 8 == 0)               
            printf(" ");
    }
    printf("\n");
}

