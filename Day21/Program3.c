#include <stdio.h>
#include <ctype.h>

int main() 
{
    char str[100];
    int v = 0, c = 0;

    printf("Enter text: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                v++;
            } else {
                c++;
            }
        }
    }

    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);

    return 0;
}
