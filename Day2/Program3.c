#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int num, temp;
    long long product = 1;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        return 1;
    }

    temp = abs(num);

    if (temp == 0) {
        product = 0;
    } else {
        while (temp > 0) {
            product *= (temp % 10);
            temp /= 10;
        }
    }

    printf("Product of digits: %lld\n", product);

    return 0;
}
