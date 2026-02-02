#include<stdio.h>

int main(){
	
	int i,size;
	
	printf("Enter a size of array: ");
	scanf("%d",&size);
	
	int arr[size];
	
    printf("\nEnter an array element:\n");
	
	for(i=0; i<size; i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
   
    int length = sizeof(arr) / sizeof(arr[0]);
    
    printf("\nLength of array is: %d",length);
    
    return 0;

}
