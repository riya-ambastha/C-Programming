#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLower(char str[]) {
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = tolower(str[i]);
    }
}

void bubbleSort(char str[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int areAnagrams(char str1[], char str2[]) {
    int n1 = strlen(str1);
    int n2 = strlen(str2);

    if (n1 != n2) {
        return 0;
    }

    toLower(str1);
    toLower(str2);

    bubbleSort(str1, n1);
    bubbleSort(str2, n2);

    for (int i = 0; i < n1; ++i) {
        if (str1[i] != str2[i]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str1[100], str2[100];
    printf("Enter two strings: ");
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    if (areAnagrams(str1, str2)) {
        printf("Strings are anagrams.\n");
    } else {
        printf("Strings are not anagrams.\n");
    }

    return 0;
}

