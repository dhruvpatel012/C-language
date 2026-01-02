#include<stdio.h>
#include<stdio.h>

int main(){
	
	int i,num,table;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	for(i = 1; i<=10; i++){
		table = num * i;
		printf("\n%d * %d = %d",num,i,table);
	}
	
	
	
	return 0;
}
