#include<stdio.h>
#include<conio.h>

int main(){
	
	int num1,num2,num3,min;
	
	printf("Enter the first value: ");
	scanf("%d",&num1);
	
	printf("Enter the second value: ");
	scanf("%d",&num2);
	
	printf("Enter the third value: ");
	scanf("%d",&num3);
	
	min = (num1<num2 && num1<num3)? num1 : ((num2<num3)? num2:num3);
	
	printf("Minimum Number Is: %d",min);
	
	return 0;
}
