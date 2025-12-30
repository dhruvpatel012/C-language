#include<stdio.h>
#include<conio.h>

int main(){
	
	float b,h,area;
	
	printf("Enter a base of triangle: ");
	scanf("%f",&b);
	
	printf("Enter a height of triangle: ");
	scanf("%f",&h);
	
	area = 0.5 *b*h;
	
	printf("Area of triangle is = %f",area);
	
	return 0;
}
