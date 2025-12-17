#include<stdio.h>
#include<conio.h>

int main(){
	
	int f_angle , s_angle , t_angle;
	
	printf("Enter a value of first angle: ");
	scanf("%d",&f_angle);
	
	printf("Enter a value of second angle: ");
	scanf("%d",&s_angle);
	
	t_angle  = 180 - (f_angle + s_angle);
	
	printf("Value of Third Angle is = %d",t_angle);
	
	return 0;
	
}
