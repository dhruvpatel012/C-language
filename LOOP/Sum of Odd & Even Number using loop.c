#include<stdio.h>
#include<conio.h>

int main(){
	
	int i,j,num,e_sum=0,o_sum=0;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	printf("\nEven Numbers: ");//FOR EVEN NUMBER
	for(i = 1; i<=num; i++){
		if(i%2==0){
			printf("%d ",i);
			e_sum = e_sum + i;
		}
	}
	printf("\nSum of even number is = %d",e_sum);
	
	
	
	printf("\n\nOdd Numbers: "); // FOR ODD NUMBER
	for(i = 1; i<=num; i++){
		if(i%2!=0){
			printf("%d ",i);
			o_sum = o_sum + i;
		}
	}
	printf("\nSum of odd number is = %d",o_sum);
	
	
	
	
	return 0;
}
