#include<stdio.h>
#include<conio.h>

int main(){
	
	float r,area;
    const float pi = 3.14;
	
	printf("Enter a radius of circle:");
	scanf("%f",&r);
	
	area = pi*r*r;
	
	printf("Area of circle = %f",area);
	
}
