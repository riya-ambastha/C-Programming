#include <stdio.h>

int main() {
    float matrix[2][2], determinant;
    printf("Enter elements of 2x2 matrix:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            scanf("%f", &matrix[i][j]);
        }
    }
    determinant = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    if (determinant == 0) {
        printf("Matrix is singular, inverse cannot be found.\n");
    } else {
        printf("Inverse of the matrix:\n");
        printf("%.2f %.2f\n%.2f %.2f\n",
            matrix[1][1] / determinant, -matrix[0][1] / determinant,
            -matrix[1][0] / determinant, matrix[0][0] / determinant);
    }
    return 0;
}

