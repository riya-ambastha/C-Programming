#include <stdio.h>

void decToHexadecimal(int n) {
    char hexaDecimalNum[100];
    int i = 0;
    while (n != 0) {
        int temp = 0;
        temp = n % 16;
        if (temp < 10) {
            hexaDecimalNum[i] = temp + 48;
            i++;
        } else {
            hexaDecimalNum[i] = temp + 55;
            i++;
        }
        n = n / 16;
    }
    printf("Hexadecimal representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexaDecimalNum[j]);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    decToHexadecimal(num);
    return 0;
}

