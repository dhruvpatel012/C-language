#include<stdio.h>
#include<conio.h>

int main(){
	
	float m,e,s,Average_Mark;
	
	printf("Enter maths marks: ");
	scanf("%f",&m);
	
	printf("Enter english marks: ");
	scanf("%f",&e);
	
	printf("Enter science marks: ");
	scanf("%f",&s);
	
	
	Average_Mark = (m + e + s) / 3;
	
	printf("Average Mark= %.2f",Average_Mark);
	
	return 0;
}
