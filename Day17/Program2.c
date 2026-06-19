#include <stdio.h>

int main() 
{
    int n1, n2;
    int a[100], b[100], result[200];
    int k = 0;

    printf("Enter number of elements for first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number of elements for second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < n1; i++) {
        int is_duplicate = 0;
        for (int j = 0; j < k; j++) {
            if (a[i] == result[j]) {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate) {
            result[k] = a[i];
            k++;
        }
    }

    for (int i = 0; i < n2; i++) {
        int is_duplicate = 0;
        for (int j = 0; j < k; j++) {
            if (b[i] == result[j]) {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate) {
            result[k] = b[i];
            k++;
        }
    }

    printf("Union of the two arrays is:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
