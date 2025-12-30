#include<stdio.h>
#include<conio.h>

int main(){
	
	int i,num;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	printf("\nEven Numbers: ");
	for(i = 1; i<=num; i++){
		if(i%2==0){
			printf("%d ",i);
		}
	}
	
	printf("\n\nOdd Numbers: ");
	for(i = 1; i<=num; i++){
		if(i%2!=0){
			printf("%d ",i);
		}
	}
	
	return 0;
}
