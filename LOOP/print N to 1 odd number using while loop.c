#include<stdio.h>
#include<conio.h>

int main(){
	
	int i=1,n;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	while(n>=i){
     	if(n%2!=0){
	    	printf("%d ",n);
     	}	
     	 n--;
	}
	return 0;
}
