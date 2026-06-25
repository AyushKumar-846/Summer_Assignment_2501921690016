#include <stdio.h>
#include <string.h>

int main() 
{
    char str[200], word[50], max[50] = "";
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (strlen(word) > strlen(max)) {
                strcpy(max, word);
            }
            j = 0;
            if (str[i] == '\0' || str[i] == '\n') {
                break;
            }
        }
        i++;
    }

    printf("Longest word: %s\n", max);
    return 0;
}
