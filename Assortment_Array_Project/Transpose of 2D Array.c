#include <stdio.h>

int main() {
    int length, i, j;
    int a[20][20];

    // Input size (square matrix)
    printf("Enter the array's row & column length: ");
    scanf("%d",&length);

    // Input elements
    printf("\nEnter array elements:\n");
    for(i = 0; i < length; i++) {
        for(j = 0; j < length; j++) {
            printf("\na[%d][%d] = ", i, j);
            scanf("%d",&a[i][j]);
        }
    }

    // Print transpose
    printf("\nThe transpose matrix of an array:\n");
    for(i = 0; i < length; i++) {
        for(j = 0; j < length; j++) {
            printf("%d ",a[j][i]); // row becomes column
        }
        printf("\n");
    }

    return 0;
}

