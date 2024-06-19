#include <stdio.h>

int main() {
    int n, x, i, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &x);
    for (i = 0; i < n; ++i) {
        if (arr[i] == x) {
            found = 1;
            break;
        }
    }
    if (found)
        printf("%d is found at index %d\n", x, i);
    else
        printf("%d is not found in the array\n", x);
    return 0;
}

