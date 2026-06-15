#include <stdio.h>

int isPalindrome(int num) 
{
    int reversed = 0, original = num;
    
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    
    return original == reversed;
}

int main() {
    int n = 121;
    
    if (isPalindrome(n)) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
    
    return 0;
}
