#include <stdio.h>

int findMax(int num1, int num2) 
{
    if (num1 > num2) {
        return num1;
    }
    return num2;
}

int main() {
    int a = 15;
    int b = 27;
    int result = findMax(a, b);
    
    printf("Maximum is: %d\n", result);
    return 0;
}
