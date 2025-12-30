#include<stdio.h>
#define pi 3.14

int main(){
	
	float r,perimeter;
	
	printf("Enter the value radius: ");
	scanf("%f",&r);
	
	
	 perimeter= 2*pi*r;
	
	printf("Peremeter = %.2f",perimeter);
	
	return 0;
	
}
