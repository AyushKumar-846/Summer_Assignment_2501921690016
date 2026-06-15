#include <stdio.h>

int main() 
{
    int n, i, j;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int a[n];
    
    printf("Enter elements in array: \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Duplicate elements: \n");
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                printf("%d\n", a[i]);
                break;
            }
        }
    }
    
    return 0;
}
