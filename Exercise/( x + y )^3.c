#include<stdio.h>
#include<conio.h>

int main(){
	int x,y,sum,expression;
	
	printf("Enter the value of x: ");
	scanf("%d",&x);
	
	printf("Enter the value of y: ");
	scanf("%d",&y);
	
	sum = x + y;
	
	printf("Sub is: %d",sum);
	
	expression = sum*sum*sum;
	
	printf("\nFinal Answer of ( x + y)^3: %d",expression);
	
	
	return 0;
	
}

