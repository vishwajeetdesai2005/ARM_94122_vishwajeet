#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, bit, result;
    int binary[8];
    int i;

    num = 0x2A;         
    bit = 1 << 4;        
    result = num | bit; 
    printf("Result in hex: 0x%X\n", result);
    printf("Result in decimal: %d\n", result);
    for (i = 7; i >= 0; i--)
    {
        binary[i] = result % 2;
        result = result / 2;
    }

    printf("Binary No. = ");
    for (i = 0; i < 8; i++)
    {
        printf("%d", binary[i]);
    }

    return 0;
}

