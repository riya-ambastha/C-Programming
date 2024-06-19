#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n], freq[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    for (int i = 0; i < n; ++i) {
        int count = 1;
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] == arr[j]) {
                ++count;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }
    printf("Frequency of elements: \n");
    for (int i = 0; i < n; ++i) {
        if (freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
    return 0;
}

