#include <stdio.h>

int main() {
    int row, column, i, j;
    int a[10][10];

    // Input row and column size
    printf("Enter the array's row size: ");
    scanf("%d",&row);

    printf("Enter the array's column size: ");
    scanf("%d",&column);

    // Input elements
    printf("\nEnter array elements:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            printf("\na[%d][%d] = ", i, j);
            scanf("%d",&a[i][j]);
        }
    }

    // Assume first element is largest
    int max = a[0][0];

    // Find largest element
    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            if(a[i][j] > max) {
                max = a[i][j];
            }
        }
    }

    
	printf("\nThe largest element is: %d",max);

    return 0;
}

