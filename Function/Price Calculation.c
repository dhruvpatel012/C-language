#include<stdio.h>

void calculatePrice(float value1);

void calculatePrice(float value1){
	value1 = value1 + (value1*0.18);
	printf("\nFinal price is: %f", value1);
}

int main(){
	
	float value;
	
	printf("Enter a price: ");
	scanf("%f",&value);

	calculatePrice(value);
	
	printf("\nPrice is: %f",value);
	
	
	return 0; 
}
