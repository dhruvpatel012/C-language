#include<stdio.h>
#include<conio.h>

int main(){
	
	int i,j;
	
	for(i=1; i<=5; i++){
		
		for(j=1; j<=i-1; j++){
			printf(" ");
		}
		
	   for(j=5; j>=i; j--){
	   	
	   	 if(j%2==0){
	   	 	printf("0");
			}
			
		else {
			printf("1");
		}
			
	}
		printf("\n");
   }
	
	return 0;
	}



//output:-

//
//1 0 1 0 1
//  1 0 1 0
//    1 0 1
//      1 0
//        1
