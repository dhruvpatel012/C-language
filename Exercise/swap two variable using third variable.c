#include<stdio.h>
#include<conio.h>

int main(){
	int x,y,temp;
	
	printf("Enter the value of x: ");
	scanf("%d",&x);
	
	printf("Enter the value of y: ");
	scanf("%d",&y);
	
	temp = x;
	x = y;
	y = temp;
	
	printf("After swaping:\n");
	printf("x = %d\n",x);
	printf("y = %d\n",y);
	
	
	return 0;
	
}
