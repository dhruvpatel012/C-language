#include<stdio.h>

int num1,num2;

int greekMsg();

int greekMsg(){
	
	printf("Enter First Number: ");
	scanf("%d",&num1);
	
	printf("\nEnter Second Number: ");
	scanf("%d",&num2);
		
}

int Addition();
int Addition(){
	greekMsg();
	printf("\nAddition is:%d\n\n\n",num1+num2);
}

int Substraction();
int Substraction(){
	greekMsg();
	printf("\nSubstraction is:%d\n\n\n",num1-num2);
}

int Multiplication();
int Multiplication(){
	greekMsg();
	printf("\nMultiplication is:%d\n\n\n",num1*num2);
}

int Division();
int Division(){
	greekMsg();
	printf("\nDivision is:%d\n\n\n",num1/num2);
}


int main(){
   
   printf("1) For Addition\n\n");
   Addition();	
   
   printf("2) For Substraction\n\n");
   Substraction();
   
   printf("3) For Multiplication\n\n");
   Multiplication();
   
   printf("4) For Division\n\n");
   Division();
   
   return 0;
}
