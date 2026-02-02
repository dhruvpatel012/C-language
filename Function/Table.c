#include<stdio.h>

void printTable(int n);
	
	void printTable(int n){
		int i,table;
		
		for(i=1; i<=10; i++){
			table = n*i;
			printf("\n%d * %d = %d",n,i,table);
		}
	}

 int main(){
 	
	int n;
	
	printf("Enter a  Number: ");
	scanf("%d",&n);
	
	printTable(n);
	
	return 0;	
}
