#include <stdio.h>

int main() 
{
    int size, i, j;
    int sum = 0;
    int matrix[10][10];

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < size; i++) {
        sum = sum + matrix[i][i];
    }

    printf("Sum of diagonal elements = %d\n", sum);

    return 0;
}
