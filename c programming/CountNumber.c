#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countWords(char str[]) {
    int count = 0;
    bool inWord = false;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            inWord = false;
        } else {
            if (!inWord) {
                count++;
                inWord = true;
            }
        }
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Number of words in the string: %d\n", countWords(str));
    return 0;
}

