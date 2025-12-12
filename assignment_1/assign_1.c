#include <stdio.h>

int countOneBits(unsigned int n) {
    int count = 0;
    while (n) {
        count += (n & 1);  // Add 1 if the last bit is 1
        n >>= 1;           // Right shift by 1
    }
    return count;
}

int main() {
    unsigned int num;

    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Number of 1 bits: %d\n", countOneBits(num));

    return 0;
}

