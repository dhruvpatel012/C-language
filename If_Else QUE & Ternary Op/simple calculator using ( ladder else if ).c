#include<stdio.h>
#include<conio.h>

int main(){
	
	int a,b;
	char op;
	
	printf("Enter First Number: ");
	scanf("%d",&a);
	
	printf("Enter Second Number: ");
	scanf("%d",&b);
	
	printf("Enter Operator (+ - * / %): ");
	scanf(" %c", &op);
	
	if(op == '+'){
		printf("Answer is = %d",a+b);
	}
	
	else if(op == '-'){
		printf("Answer is = %d",a-b);
	}
	
	else if(op == '*'){
		printf("Answer is = %d",a*b);
	}
	else if(op == '/'){
		printf("Answer is = %d",a/b);
	}
	else if(op == '%'){
		printf("Answer is = %d",a%b);
	}
	
	else{
		printf("Invalid Operator");
	}
	return 0;
}
