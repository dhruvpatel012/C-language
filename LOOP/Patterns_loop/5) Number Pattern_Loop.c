#include<stdio.h>

int main(){ 
	
	int i,j,row;
	
	printf("Enter a number row: ");
	scanf("%d",&row);
	
	printf("\n");
	
	for(i=row;i>=1;i--){
		
		for(j=i;j>=1;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
   return 0;
}

//Output:- 
//
// 5 4 3 2 1  
// 4 3 2 1 
// 3 2 1 
// 2 1
// 1 
