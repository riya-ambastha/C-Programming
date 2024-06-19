#include <stdio.h>

int main() {
    int n, evenCount = 0, oddCount = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
           

