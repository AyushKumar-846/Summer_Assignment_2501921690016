#include <stdio.h>
#include <string.h>

int main()
 {
    char str1[100], str2[100];
    int count1[256] = {0};
    int count2[256] = {0};

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for (int i = 0; str1[i] != '\0' && str1[i] != '\n'; i++) {
        count1[(unsigned char)str1[i]]++;
    }

    for (int i = 0; str2[i] != '\0' && str2[i] != '\n'; i++) {
        count2[(unsigned char)str2[i]]++;
    }

    printf("Common characters: ");
    for (int i = 0; i < 256; i++) {
        if (count1[i] > 0 && count2[i] > 0) {
            printf("%c ", i);
        }
    }
    printf("\n");

    return 0;
}
