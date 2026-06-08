#include <stdio.h>

int main() 
{
    int n, reversed = 0, original;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    original = n;
    
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    
    if (original == reversed)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
        
    return 0;
}
