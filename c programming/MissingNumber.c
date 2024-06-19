#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    int total = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++) {
        total -= arr[i];
    }
    return total;
}

int main() {
    int n;
    printf("Enter number of elements in array (n-1): ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers (missing one number):\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    int missingNumber = findMissingNumber(arr, n);
    printf("Missing number in the array: %d\n", missingNumber);
    return 0;
}

