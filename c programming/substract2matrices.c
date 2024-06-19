#include <stdio.h>

int main() {
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int matrix1[r][c], matrix2[r][c], diff[r][c];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            diff[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    printf("Difference of the matrices:\n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }
    return 0;
}

