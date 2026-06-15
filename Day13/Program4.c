#include <stdio.h>

int main() 
{
    int size, i;
    int even_count = 0;
    int odd_count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Even elements count = %d\n", even_count);
    printf("Odd elements count = %d\n", odd_count);

    return 0;
}
