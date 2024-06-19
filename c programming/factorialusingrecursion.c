#include <stdio.h>

unsigned long long factorial(int n);

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factorial of %d = %llu\n", num, factorial(num));
    return 0;
}

unsigned long long factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

