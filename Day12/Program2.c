#include <stdio.h>

int isArmstrong(int num) 
{
    int temp = num;
    int sum = 0;
    int rem;

    while (temp != 0) {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }

    if (sum == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
