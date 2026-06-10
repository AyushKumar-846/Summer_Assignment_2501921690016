#include <stdio.h>

int main() 
{
    int n, first = 0, second = 1, next;

    printf("Enter the position (n): ");
    scanf("%d", &n);

    if (n == 1) {
        printf("The 1st Fibonacci term is: %d\n", first);
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        next = first + second;
        first = second;
        second = next;
    }

    printf("The %ddth Fibonacci term is: %d\n", n, first);
    return 0;
}
