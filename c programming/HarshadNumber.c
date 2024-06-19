#include <stdio.h>

int isHarshadNumber(int num) {
    int originalNum = num;
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return (originalNum % sum == 0);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isHarshadNumber(num)) {
        printf("%d is a Harshad number.\n", num);
    } else {
        printf("%d is not a Harshad number.\n", num);
    }
    return 0;
}

