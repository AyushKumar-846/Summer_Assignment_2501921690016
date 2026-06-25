#include <stdio.h>

int main() 
{
    char s[200];
    int count = 0, i = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", s);

    while (s[i] != '\0') {
        if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0')) {
            count++;
        }
        i++;
    }

    printf("Word count: %d\n", count);
    return 0;
}
