#include<stdio.h>

int main(){ 
	
	int i,j,row;
	
	printf("Enter a number row: ");
	scanf("%d",&row);
	
	printf("\n");
	
	for(i=row;i>=1;i--){
		
		for(j=5;j>=i;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
   return 0;
}

//output:-
//
//5
//5 4 
//5 4 3 
//5 4 3 2 
//5 4 3 2 1
