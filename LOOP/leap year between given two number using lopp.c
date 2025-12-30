#include<stdio.h>
#include<conio.h>

int main(){
	
	int i,year1,year2;
	
	printf("Enter a first year: ");
	scanf("%d",&year1);
	
	printf("Enter a second year: ");
	scanf("%d",&year2);
	
	for(i = year1; i<=year2; i++){
		if(i%4==0){
			printf("%d,",i);
		}
	}
	
	return 0;
}


