#include<stdio.h>

int main(){ 
	
	int i,j,row;
	
	printf("Enter a row: ");
	scanf("%d",&row);
	
	printf("\n");
	
	for(i=1;i<=row;i++){
		 
		 //first star is fixed in every row
		 printf("* ");
		
	    // middle star
		if(i == 1 || i == row){
			for(j=1; j<=row-2; j++){
				printf("* ");
			}
		}
       
        // space
	    else{
	      for(j=1; j<=row-2; j++)
          printf("  ");
		}
		
		// last star is fixed in every row
		printf("* ");
		printf("\n");
		} 						
      
      return 0;
}
 

//output:- 

// * * * * *
// *       *
// *       *
// *       *
// * * * * *
