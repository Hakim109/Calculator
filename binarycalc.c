#include "Calculate.h"

char* decimalToBinary(int decimal) {
    static char binary[33]; // To store the binary representation (32 bits + null terminator)
    int i;

    for (i = 31; i >= 0; i--) {
        binary[i] = (decimal & 1) ? '1' : '0';
        decimal >>= 1;
    }

    binary[32] = '\0'; // Null-terminate the string
    return binary;
}
