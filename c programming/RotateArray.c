#include <stdio.h>

void rotateArrayByOne(int arr[], int n) {
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

int main() {
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("Original array: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    rotateArrayByOne(arr, n);
    printf("Array rotated by one position: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

