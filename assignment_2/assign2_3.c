#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, bv, c,binary[8],i;
    num = 0x2A;         
    bv= 1 << 5;        
    c = num ^ (bv); 
    printf("Result in hex: 0x%X\n", c);
    printf("Result in decimal: %d\n",c);
    for (i = 7; i >= 0; i--)
    {
        binary[i] = c % 2;
        c = c / 2;
    }

    printf("Binary No. = ");
    for (i = 0; i < 8; i++)
    {
        printf("%d", binary[i]);
    }

    return 0;
}

