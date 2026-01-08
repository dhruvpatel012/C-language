#include<stdio.h>

int main(){
	
	int i,j,row,temp=11;
	
	printf("Enter a Row: ");
	scanf("%d",&row);
	printf("\n");
	
	for(i=row; i>=1; i--){
		
		for(j=i; j<=row; j++){
			printf("%d ",temp);
			temp++;
		}
		printf("\n");
	}
	
	return 0;
}

//output:-
//
//11 
//12 13 
//14 15 16 
//17 18 19 20
