#include<stdio.h>

int main(){ 
	
	int i,j,row;
	
	printf("Enter a number row: ");
	scanf("%d",&row);
	
	printf("\n");
	
	for(i=row;i>=1;i--){
		
		for(j=i;j<=row;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
   return 0;
}

//Output:- 
//
// 5  
// 4 5
// 3 4 5 
// 2 3 4 5 
// 1 2 3 4 5
