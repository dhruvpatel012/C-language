#include<stdio.h>

int main(){ 
	
	int i,j,k,row;
	
	printf("Enter a number row: ");
	scanf("%d",&row);
	
	printf("\n");
	
	// upper-part-star
	for(i=1;i<=row;i++){
		
		for(k=1; k<=row-i; k++){
			printf(" ");
		}
		
		for(j=1; j<=2*i-1; j++){
			printf("*");
		}
	  printf("\n");
	}
	
	 //lowe-part-star
	   for(i=row-1;i>=1;i--){
		
		for(k=1; k<=row-i; k++){
			printf(" ");
		}
		
		for(j=1; j<=2*i-1; j++){
			printf("*");
		}

		printf("\n");

}
	return 0;
}

//output:-

//      *
//     *** 
//    ***** 
//   *******
//  ********* 
//   *******
//    *****
//     ***
//      *
