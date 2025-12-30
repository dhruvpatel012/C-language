#include<stdio.h>
#include<conio.h>

int main(){
	
	int num1,num2;
	
	printf("Enter the value of first number: ");
	scanf("%d",&num1);
	
	printf("Enter the value of second number: ");
	scanf("%d",&num2);
	
	
	if(num1<num2){
		printf("Minimum number is: %d",num1);
	}
	else{
		printf("Minimum number is: %d",num2);
	}
	
	
	return 0;
}
