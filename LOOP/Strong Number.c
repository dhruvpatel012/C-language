#include<stdio.h>

int main(){
	
	int no,i,temp,rem,fact,sum=0;
	
	printf("Enter a number: "); // number: 145 is strong number
	scanf("%d",&no);
	
	temp = no;
	
	while(temp>0){
		
		rem = temp%10;
		fact=1;
		
		for(i=rem; i>=1; i--){
			
			fact = fact*i;
		}
		
		sum = sum + fact;
		temp = temp/10;
    }    
	
	if(sum == no){
		printf("Strong Number !!");
	}
	
	else{
		printf("Not a Strong Number !!");
	}
	
	
	return 0;
}
