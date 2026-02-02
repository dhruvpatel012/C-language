#include <stdio.h>

int main() {
    int r, c, i, j;
    int a[10][10];
    int row, col;
    int sumRow = 0, sumCol = 0;

    // Input row and column size
    printf("Enter the array's row size: ");
    scanf("%d",&r);

    printf("Enter the array's column size: ");
    scanf("%d",&c);

    // Input elements
    printf("\nEnter array elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("\na[%d][%d] = ", i, j);
            scanf("%d",&a[i][j]);
        }
    }

    // Row sum
    printf("\nEnter row number: ");
    scanf("%d",&row);

    printf("Elements of row %d: ", row);
    for(j = 0; j < c; j++) {
        printf("%d ", a[row][j]);
        sumRow = sumRow + a[row][j];
    }
    printf("\nThe sum of row %d: %d\n", row, sumRow);

    // Column sum
    printf("\nEnter column number: ");
    scanf("%d",&col);

    printf("Elements of column %d: ", col);
    for(i = 0; i < r; i++) {
        printf("%d ", a[i][col]);
        sumCol = sumCol + a[i][col];
    }
    printf("\nThe sum of column %d: %d", col, sumCol);

    return 0;
}

