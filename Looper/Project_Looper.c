#include<stdio.h>
#include<conio.h>

int main(){
	
	char i = 'a'; //print 'a' to 'z' by skipping 3 letter
	
	do{
		{
				printf("%c ",i);
				i = i + 3; //a,d,h,l,so on...
		}
		
		i++; // output: a,e,i,m,q,u,y.....total jump = 4
	}while(i<='z');
	
	
	
	int num,count = 0; //print total digit in given number
	
	printf("\n\nEnter a number: ");
	scanf("%d",&num);
	
	if(num == 0){
		count = 1;
		printf("Total digits in given number is: %d",count);
	}
	
	else{
	  while(num!=0){
	  	count++;
	  	num = num /10;
	  }
	  printf("Total digits in given number is: %d",count);
   }
   
   
   
    int number,first_dig,last_dig,sum,copy; // print sum of first and last digit 
	  
	    printf("\n\nEnetr any number: ");
	    scanf("%d",&number);
	  
	    copy = number;
	   
	  	last_dig = number % 10;

	  	while(copy>10){
	  	copy = copy / 10;
		  }
		first_dig = copy;
				
     	sum = first_dig + last_dig;
	    printf("sum of first and last digit is = %d",sum);

	    
	    return 0;
}
	
	


