#include <stdio.h>

int main() 
{
    long long n;
    printf("Enter a number: ");
    scanf("%lld", &n);

    long long i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            n /= i;
        } else {
            i++;
        }
    }

    printf("Largest prime factor: %lld\n", n);
    return 0;
}
