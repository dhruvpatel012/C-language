#include<stdio.h>
#include<conio.h>

int main(){
	int x,y,sub,expression;
	
	printf("Enter the value of x: ");
	scanf("%d",&x);
	
	printf("Enter the value of y: ");
	scanf("%d",&y);
	
	sub = x - y;
	
	printf("Sub is: %d",sub);
	
	expression = sub*sub;
	
	printf("\nFinal Answer of ( x - y)^2: %d",expression);
	
	
	return 0;
	
}
