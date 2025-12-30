#include<stdio.h>

int main(){
	
	float p,r,n,si;
	
	printf("Enter the value of principle amount: ");
	scanf("%f",&p);
	
	printf("Enter the rate of interest: ");
	scanf("%f",&r);
	
	printf("Enter the value of time: ");
	scanf("%f",&n);
	
	si = (p*r*n) / 100;
	
	printf("Simple interest = %.2f",si);
	
	return 0;
	
}
