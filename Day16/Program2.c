#include <stdio.h>

int main() 
{
    int n, i, j;
    int count = 0;
    int maxCount = 0;
    int mostFrequent = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers: \n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        count = 0;
        for(j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }

    printf("The most frequent element is %d (appears %d times)\n", mostFrequent, maxCount);

    return 0;
}
