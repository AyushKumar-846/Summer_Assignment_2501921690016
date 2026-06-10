#include <stdio.h>

int main() 
{
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - 1 - i; j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%c", 'A' + j);
        }
        for (int j = i - 1; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
