#include<stdio.h>

void oddElement(int arr[10], int size)
{
    int i;

    printf("\nOdd Elements in the array are:");

    for(i = 0; i < size; i++){
        if(arr[i] % 2 != 0)
        {
            printf("%d,", arr[i]);
        }
    }
}

int main()
{
    int arr[10], size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("\nEnter array elements:\n");

    for(i = 0; i < size; i++){
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    oddElement(arr, size);

    return 0;
}
