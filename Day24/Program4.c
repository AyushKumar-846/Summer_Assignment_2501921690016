#include <stdio.h>

int main() 
{
    char str[100];
    int i = 0, j, k;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        j = i + 1;
        while (str[j] != '\0') {
            if (str[j] == str[i]) {
                k = j;
                while (str[k] != '\0') {
                    str[k] = str[k + 1];
                    k++;
                }
            } else {
                j++;
            }
        }
        i++;
    }

    printf("Result: %s", str);
    return 0;
}
