#include <stdio.h>
#include <string.h>

int main()
 {
    char s1[100], s2[100], temp[200] = "";

    printf("Enter first string: ");
    scanf("%99s", s1);
    printf("Enter second string: ");
    scanf("%99s", s2);

    if (strlen(s1) == strlen(s2)) {
        strcat(temp, s1);
        strcat(temp, s1);
        
        if (strstr(temp, s2)) {
            printf("Yes, it is a rotation.\n");
            return 0;
        }
    }

    printf("No, it is not a rotation.\n");
    return 0;
}
