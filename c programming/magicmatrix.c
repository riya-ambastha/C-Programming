  #include <stdio.h>
#include <stdbool.h>

bool isMagicSquare(int n, int matrix[n][n]) {
    int sumDiag1 = 0, sumDiag2 = 0;
    for (int i = 0; i < n; ++i) {
        sumDiag1 += matrix[i][i];
        sumDiag2 += matrix[i][n - 1 - i];
    }
    if (sumDiag1 != sumDiag2) return false;

    for (int i = 0; i < n; ++i) {
        int rowSum = 0, colSum = 0;
        for (int j = 0; j < n; ++j) {
            rowSum += matrix[i][j];
            colSum += matrix[j][i];
        }
        if (rowSum != sumDiag1 || colSum != sumDiag1) return false;
    }
    return true;
}

int main() {
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    if (isMagicSquare(n, matrix)) {
        printf("The matrix is a magic square.\n");
    } else {
        printf("The matrix is not a magic square.\n");
    }
    return 0;
}

