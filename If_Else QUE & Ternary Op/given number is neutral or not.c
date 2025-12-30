#include<stdio.h>
#include<conio.h>

int main(){
	
	int num;
	
	printf("Enter the value of first number: ");
	scanf("%d",&num);
	

	if(num==0){
		printf("This is a Neutral Number");
	}
	else if(num>0){
		printf("This number is Positive");
	}
	
	else{
		printf("This number is Negative");
	}
	
	return 0;
}
