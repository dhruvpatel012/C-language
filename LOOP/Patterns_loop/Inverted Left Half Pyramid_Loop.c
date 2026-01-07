#include<stdio.h>

int main(){ 
	
	int i,j,k;
	
	for(i=5;i>=1;i--){
		
		for(k = 1; k<=5-i; k++){
			printf(" ");
		}
		
<<<<<<< HEAD
		for(j=1;j<=i;j++){
			printf("*");
		}

=======
		for(j=1; j<=i; j++){
			printf("*");
		}
		
		
>>>>>>> 1653ff6e52eca2cacd2349137d5574667153dd87
		printf("\n");
	}
	return 0;
}

// * * * * *
<<<<<<< HEAD
//   * * * * 
//     * * *
//       * * 
//         *
=======
// * * * * 
// * * * 
// * * 
// *
>>>>>>> 1653ff6e52eca2cacd2349137d5574667153dd87
