#include <stdio.h>

void printFloydTriangle(int rows) {
    int number = 1;
    printf("Floyd's Triangle with %d rows:\n", rows);
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter number of rows for Floyd's Triangle: ");
    scanf("%d", &rows);
    printFloydTriangle(rows);
    return 0;
}

