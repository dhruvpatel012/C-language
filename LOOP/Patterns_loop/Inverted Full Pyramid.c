#include<stdio.h>

int main(){ 
	
	int i,j,k,row;
	
	printf("Enter a number row: ");
	scanf("%d",&row);
	
	printf("\n");
	
	for(i=row;i>=1;i--){
	
         //space
		for(k=1; k<=row-i; k++){
			printf(" ");
		}
		
        //star
		for(j=1; j<=2*i-1; j++){
			printf("*");
		}
		
// star
//		for(j=1;j<=i;j++){
//			printf("*");
//		}
		
		
		printf("\n");
	}

		

	return 0;
}

//output:- 

//  ********* 
//   *******
//    ***** 
//     *** 
//      *

