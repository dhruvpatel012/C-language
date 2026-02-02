#include<stdio.h>

int main(){
	
	int i, size;
	float average, sum = 0;
	
	// take array size
	printf("Enter size of array: ");
	scanf("%d", &size);
	
	int arr[size];
	
	// take elements
	printf("\nEnter array elements:\n");
	for(i = 0; i < size; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	
	// calculate sum
	for(i = 0; i < size; i++){
		sum = sum + arr[i];
	}
	
	// calculate average
	average = sum / size;
	
	printf("\nAverage of array is: %.2f", average);
	
	return 0;
}

