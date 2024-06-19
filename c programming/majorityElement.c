#include <stdio.h>

int findMajorityElement(int arr[], int n) {
    int majorityElement = -1, count = 0;
    for (int i = 0; i < n; ++i) {
        if (count == 0) {
            majorityElement = arr[i];
            count = 1;
        } else if (arr[i] == majorityElement) {
            count++;
        } else {
            count--;
        }
    }
    count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == majorityElement) {
            count++;
        }
    }
    if (count > n / 2) {
        return majorityElement;
    } else {
        return -1; // no majority element
    }
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
    int majorityElement = findMajorityElement(arr, n);
    if (majorityElement != -1) {
        printf("Majority element in the array: %d\n", majorityElement);
    } else {
        printf("No majority element found in the array.\n");
    }
    return 0;
}

