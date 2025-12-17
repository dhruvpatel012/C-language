#include<stdio.h>
#include<conio.h>

int main(){
	
	float F,C;
	
	printf("Enter a value in Celcius: ");
	scanf("%f",&C);
	
	F = (1.8 * C) + 32;
	
	printf("Fahrenheit = %.1f",F);
}
