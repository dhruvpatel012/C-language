#include<stdio.h>

int main(){
	
	int i,j,row;
	
	printf("Enter a number row: ");
	scanf("%d",&row);
	
	printf("\n");
	
	for(i=1;i<=row;i++){
		
		//logic: I have to print one less space than the row I am on. 
		for(j=1;j<=i-1;j++){
			printf(" ");
		}
		
		for(j=1;j<=row;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
