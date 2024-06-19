#include <stdio.h>

int sumOfNaturalNumbers(int n);

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum of natural numbers up to %d = %d\n", num, sumOfNaturalNumbers(num));
    return 0;
}

int sumOfNaturalNumbers(int n) {
    if (n != 0)
        return n + sumOfNaturalNumbers(n - 1);
    else
        return 0;
}


