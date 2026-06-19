#include <stdio.h>

int main() 
{
    int n, d;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1) return 1;

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 1;
    }

    printf("Enter number of positions to rotate left: ");
    if (scanf("%d", &d) != 1) return 1;

    d = d % n;

    for (int i = 0; i < d; i++) {
        int first = arr[0];
        for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = first;
    }

    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
