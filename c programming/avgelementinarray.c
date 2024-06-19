#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Average of elements: %.2f\n", sum / n);
    return 0;
}


