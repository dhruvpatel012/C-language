#include<stdio.h>
#include<conio.h>


int main(){
	
	float b_salary,HA,DA,TA,GROSS_SALARY;
	
	printf("Enter a Base Salary: ");
	scanf("%f",&b_salary);
	
	HA = (b_salary * 10) / 100;
	printf("value when applied HA is: %f \n",HA);
	
	DA = (b_salary * 5) / 100;
	printf("value when applied DA is: %f \n",DA);
	
	TA = (b_salary * 8) / 100;
	printf("value when applied TA is: %f \n",TA);
	
	GROSS_SALARY = b_salary+HA+DA+TA;
	
	printf("GROSS_SALARY is = %.2f",GROSS_SALARY);
	
	
}
