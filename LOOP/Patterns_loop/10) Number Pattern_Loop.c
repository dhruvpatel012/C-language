#include<stdio.h>

int main(){ 
	
	int i,j,row;
	
	printf("Enter a number row: ");
	scanf("%d",&row);
	
	printf("\n");
	
	for(i=1;i<=row;i++){
		
		for(j=row;j>=i;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
   return 0;
}

//Output:- 
//
// 5 4 3 2 1
// 5 4 3 2 
// 5 4 3
// 5 4 
// 5
