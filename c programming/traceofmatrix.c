#include <stdio.h>

int main() {
    int n, trace = 0;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                trace += matrix[i][j];
            }
        }
    }
    printf("Trace of the matrix: %d\n", trace);
    return 0;
}

