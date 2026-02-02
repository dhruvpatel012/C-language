#include<stdio.h>

int main(){
	
	int arr1[5],arr2[5],arr3[5];
	int i;
	
	for(i=0; i<5; i++){
		scanf("%d",&arr1[i]);
	}
	
	for(i=0; i<5; i++){
		scanf("%d",&arr2[i]);
	}
	
	printf("\nEnter the value of first array: ");
    for(i=0; i<5; i++){
    	printf("%d ",arr1[i]);
	}
	
	printf("\nEnter the value of second array: ");
    for(i=0; i<5; i++){
    	printf("%d ",arr2[i]);
	}
	
	//store sum of arr1 & arr2 into arr3
	
	for(i=0; i<5; i++){
		arr3[i] = arr1[i] + arr2[i];
	}
	
	printf("\nSum = ");
	for(i=0; i<5; i++){
		printf("%d ",arr3[i]);
	}
	
	return 0;
}
