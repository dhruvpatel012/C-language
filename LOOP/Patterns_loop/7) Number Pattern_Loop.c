#include<stdio.h>

int main(){ 
	
	int i,j,row;
	
	printf("Enter a number row: ");
	scanf("%d",&row);
	
	printf("\n");
	
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			printf("%d ",i);
		}
		printf("\n");
	}
   return 0;
}

//output:-
//
//1
//2 2
//3 3 3
//4 4 4 4
//5 5 5 5 5
