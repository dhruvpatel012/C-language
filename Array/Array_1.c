#include<stdio.h>

int main(){
	
	int arr[5] = {};
	int i;
	
	for(i=0; i<5; i++){
		scanf("%d", &arr[i]);
		printf("\nmarks is = %d",arr[i]);
	}
	
	printf("\n%d",arr[6]);
	
	return 0;
}
