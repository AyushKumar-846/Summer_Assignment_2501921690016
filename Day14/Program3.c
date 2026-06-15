#include <stdio.h>
#include <limits.h>

int main()
 {
    int arr[100], size, i;
    int first, second;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    first = INT_MIN;
    second = INT_MIN;

    for (i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", second);
    }

    return 0;
}
