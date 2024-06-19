#include <stdio.h>
#include <math.h>

int main() {
    int num;
    float sqrtNum;
    printf("Enter an integer: ");
    scanf("%d", &num);
    sqrtNum = sqrt(num);
    if (sqrtNum == (int)sqrtNum) {
        printf("%d is a perfect square.\n", num);
    } else {
        printf("%d is not a perfect square.\n", num);
    }
    return 0;
}

