#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t reg = 0xAA;
    printf("Register before: 0x%02X\n", reg);
    uint8_t extracted = (reg >> 2) & 0x07;
    printf("Extracted (bits 2-4): 0x%02X\n", extracted);
    uint8_t newValue = 0x00;
    reg = (reg & ~(0x07 << 2)) | (newValue << 2);
    printf("Register after:  0x%02X\n", reg);
    return 0;
}
