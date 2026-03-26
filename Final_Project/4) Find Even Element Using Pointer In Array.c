#include<stdio.h>

int main()
{
    int arr[10], size, i,*ptr;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("\nEnter array elements:\n");

    for(i = 0; i < size; i++){
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    ptr = &arr[0]; // using & to store address of first element
    
    printf("\nEven Elements in the array are: ");
    
    for(i=0; i<size; i++){
    	if(*(ptr + i) %2 == 0){
    		printf("%d,", *(ptr + i));
		}
	}

    return 0;
}
