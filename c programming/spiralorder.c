#include <stdio.h>

void printSpiral(int n, int m, int a[n][m]) {
    int i, k = 0, l = 0;
    while (k < n && l < m) {
        for (i = l; i < m; ++i) {
            printf("%d ", a[k][i]);
        }
        k++;
        for (i = k; i < n; ++i) {
            printf("%d ", a[i][m-1]);
        }
        m--;
        if (k < n) {
            for (i = m-1; i >= l; --i) {
                printf("%d ", a[n-1][i]);
            }
            n--;
        }
        if (l < m) {
            for (i = n-1; i >= k; --i) {
                printf("%d ", a[i][l]);
            }
            l++;
        }
    }
}

int main() {
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int matrix[r][c];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Spiral order of the matrix: ");
    printSpiral(r, c, matrix);
    printf("\n");
    return 0;
}

