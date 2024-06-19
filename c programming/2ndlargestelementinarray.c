#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    int first = arr[0], second = -1;
    for (int i = 1; i < n; ++i) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    if (second == -1)
        printf("No second largest element\n");
    else
        printf("Second largest element: %d\n", second);
    return 0;
}

