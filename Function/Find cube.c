#include<stdio.h>

void cube(int n);

void cube(int n){
	printf("Enter your number: ");
	scanf("%d",&n);
	
	printf("Cube is: %d",n*n*n);
}

int main(){
	
	int n;
	cube(n);
	
	return 0;
}
