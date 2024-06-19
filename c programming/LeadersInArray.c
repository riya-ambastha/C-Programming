#include <stdio.h>

void findLeaders(int arr[], int n) {
    int max_from_right = arr[n-1];
    printf("Leaders in the array: %d ", max_from_right);
    for (int i = n-2; i >= 0; i--) {
        if (arr[i] > max_from_right) {
            max_from_right = arr[i];
            printf("%d ", max_from_right);
        }
    }
    printf("\n");
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
    findLeaders(arr, n);
    return 0;
}

