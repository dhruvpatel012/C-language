#include<stdio.h>

int sum(int a , int b);

int main(){
	
	int a,b,s;
	
	printf("Enter a first number: ");
	scanf("%d",&a);	
	
	printf("Enter a second number: ");
	scanf("%d",&b);	
	
	s = sum(a,b);
	printf("Sum is: %d",s);
	
	return 0;
}

int sum(int a , int b){	
	    return a + b;
	}
