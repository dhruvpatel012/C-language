#include<stdio.h>
#include<conio.h>

int main(){
	
	int num1,num2,num3,num4;
	
	printf("Enter four number: ");
	scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
	
	if(num1>=num2 && num1>=num3 && num1>=num4){
		printf("The maximun nunmber is %d",num1);
	}
	
	else if(num2>=num1 && num2>=num3 && num2>=num4){
		printf("The maximun nunmber is %d",num2);
	}
	
	else if(num3>=num1 && num3>=num2 && num3>=num4){
		printf("The maximun nunmber is %d",num3);
	}
	
	else{
		printf("The maximun nunmber is %d",num4);
	}
	
	return 0;
}
