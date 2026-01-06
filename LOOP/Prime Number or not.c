#include<stdio.h>
#include<conio.h>

int main(){
	
	int i,num,temp = 0;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	for(i = 1; i<=num; i++){
		
		if(num %i==0){
			temp++;
		}
	}
	
	 if(temp == 2){
	    	printf("Your number is Prime Number !!");
		}
		
		else{
			printf("Your number is Not a Prime Number !!");
		}
	
	return 0;
}
