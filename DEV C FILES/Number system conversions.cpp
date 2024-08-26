#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Function to convert binary to decimal
int binaryToDecimal(char binary[]) {
    int decimal = 0;
    int len = strlen(binary);
    for (int i = len - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += pow(2, len - i - 1);
        }
    }
    return decimal;
}

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    int binary[32];
    int i = 0;
    while (decimal > 0) {
        binary[i++] = decimal % 2;
        decimal /= 2;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

// Function to convert decimal to octal
void decimalToOctal(int decimal) {
    int octal[100];
    int i = 0;
    while (decimal > 0) {
        octal[i++] = decimal % 8;
        decimal /= 8;
    }
    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

// Function to convert decimal to hexadecimal
void decimalToHexadecimal(int decimal) {
    char hex[100];
    int i = 0;
    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hex[i++] = remainder + '0';
        } else {
            hex[i++] = remainder - 10 + 'A';
        }
        decimal /= 16;
    }
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
}

// Main function
int main() {
    int choice;
    printf("1. Binary\n");
    printf("2. Octal\n");
    printf("3. Decimal\n");
    printf("4. Hexadecimal\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter binary number: ");
            char binary[100];
            scanf("%s", binary);
            printf("Decimal: %d\n", binaryToDecimal(binary));
            decimalToOctal(binaryToDecimal(binary));
            decimalToHexadecimal(binaryToDecimal(binary));
            break;
        case 2:
            printf("Enter octal number: ");
            int octal;
            scanf("%o", &octal);
            printf("Decimal: %d\n", octal);
            decimalToBinary(octal);
            decimalToHexadecimal(octal);
            break;
        case 3:
            printf("Enter decimal number: ");
            int decimal;
            scanf("%d", &decimal);
            printf("Binary: ");
            decimalToBinary(decimal);
            printf("Octal: ");
            decimalToOctal(decimal);
            printf("Hexadecimal: ");
            decimalToHexadecimal(decimal);
            break;
        case 4:
            printf("Enter hexadecimal number: ");
            char hex[100];
            scanf("%X", &hex);
            printf("Decimal: %d\n", (int)strtol(hex, NULL, 16));
            decimalToBinary((int)strtol(hex, NULL, 16));
            decimalToOctal((int)strtol(hex, NULL, 16));
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
