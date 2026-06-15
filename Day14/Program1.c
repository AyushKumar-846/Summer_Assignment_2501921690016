#include <stdio.h>

int main() 
{
    int arr[100], size, search, i;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter %d numbers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &search);

    for (i = 0; i < size; i++) {
        if (arr[i] == search) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Element not found\n");
    }

    return 0;
}
