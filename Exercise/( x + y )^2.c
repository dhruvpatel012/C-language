#include<stdio.h>
#include<conio.h>

int main(){
	int x,y,sum,expression;
	
	printf("Enter the value of x: ");
	scanf("%d",&x);
	
	printf("Enter the value of y: ");
	scanf("%d",&y);
	
	sum = x + y;
	
	printf("Sum is: %d",sum);
	
	expression = sum*sum;
	
	printf("\n Final Answer of ( x + y)^2: %d",expression);
	
	
	return 0;
	
}

