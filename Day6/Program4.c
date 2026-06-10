#include <stdio.h>

int main() 
{
    int x, n;
    long long result = 1;

    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (n): ");
    scanf("%d", &n);

    int temp = n;
    while (temp > 0) {
        result *= x;
        temp--;
    }

    printf("%d^%d = %lld\n", x, n, result);

    return 0;
}
