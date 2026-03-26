#include<stdio.h>

int main(){
	
	int i,j,k;
	
	for(i=10; i>=6; i--){
		
		
		for(k=6; k<=i-1; k++){
			printf(" ");
		}
		
		for(j=i; j<=10; j++){
			printf("%d",j);
		}
		printf("\n");
	}
	
	return 0;
}
