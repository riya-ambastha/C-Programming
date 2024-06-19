#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    int matrix[n][n], sum = 0;
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                sum += matrix[i][j];
            }
        }
    }
    printf("Sum of diagonal elements: %d\n", sum);
    return 0;
}

