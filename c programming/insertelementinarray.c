#include <stdio.h>

int main() {
    int n, pos, elem;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter elements: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("Enter position to insert element: ");
    scanf("%d", &pos);
    printf("Enter element to insert: ");
    scanf("%d", &elem);
    for (int i = n; i >= pos; --i) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = elem;
    printf("Array after insertion: ");
    for (int i = 0; i <= n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

