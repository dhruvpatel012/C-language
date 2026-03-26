#include<stdio.h>

float average(int arr[10][10], int r, int c)
{
    int i,j,sum=0;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum = sum + arr[i][j];
        }
    }

    return (float)sum/(r*c);
}

int main()
{
    int arr[10][10], row,col,i,j;
    float avg;

    printf("Enter rows of an array: ");
    scanf("%d",&row);
    
     printf("Enter columns of an array: ");
    scanf("%d",&col);

    printf("\nEnter elements:\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++){
        	printf("\narr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    avg = average(arr,row,col);

    printf("\n\nAverage = %.2f",avg);

    return 0;
}
