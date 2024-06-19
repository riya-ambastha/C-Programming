#include <stdio.h>
#include <string.h>

void reverseSentence(char str[]) {
    int i, j;
    char temp;
    int len = strlen(str);
    j = len - 1;
    for (i = 0; i < j; ++i, --j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    reverseSentence(str);
    printf("Reversed sentence: %s\n", str);
    return 0;
}

