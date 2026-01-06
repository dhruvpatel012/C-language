#include<stdio.h>

int main(){ 
	
	int i,j,row;
	
	printf("Enter a number row: ");
	scanf("%d",&row);
	
	printf("\n");
	
	for(i=1;i<=row;i++){
		
		for(j=i;j<=row;j++){
			printf("%d",i);
		}
		printf("\n");
	}
   return 0;
}

//Output:- 
//
// 1 1 1 1 1
// 2 2 2 2 
// 3 3 3 
// 4 4
// 5
