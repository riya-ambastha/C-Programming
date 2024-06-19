#include <stdio.h>

void decToOctal(int n) {
    int octalNum[100];
    int i = 0;
    while (n != 0) {
        octalNum[i] = n % 8;
        n = n / 8;
        i++;
    }
    printf("Octal representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octalNum[j]);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    decToOctal(num);
    return 0;
}

