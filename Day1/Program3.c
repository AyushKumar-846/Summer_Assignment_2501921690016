<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int n, i;
    unsigned long long fact = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: Factorial of a negative number does not exist.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

    return 0;
}
=======
#include <stdio.h>

int main() 
{
    int n, i;
    unsigned long long fact = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: Factorial of a negative number does not exist.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

    return 0;
}
>>>>>>> 78f7d1ea224965acc1a3c9fa41ce252c1b3ff27a
