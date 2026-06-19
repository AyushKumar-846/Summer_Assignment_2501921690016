#include <stdio.h>

int main()
 {
    int n;

    printf("Enter total number of elements including the missing one: ");
    scanf("%d", &n);

    int total_sum = n * (n + 1) / 2;
    int current_sum = 0;
    int num;

    printf("Enter the %d elements:\n", n - 1);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &num);
        current_sum += num;
    }

    int missing_number = total_sum - current_sum;
    printf("The missing number is: %d\n", missing_number);

    return 0;
}
