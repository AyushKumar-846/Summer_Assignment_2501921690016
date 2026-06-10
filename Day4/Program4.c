#include <stdio.h>

int main()
 {
    int start, end, i, temp, rem, sum;

    printf("Enter lower and upper limit: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers: ");
    for (i = start; i <= end; i++) {
        temp = i;
        sum = 0;

        while (temp != 0) {
            rem = temp % 10;
            sum += rem * rem * rem;
            temp /= 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}
