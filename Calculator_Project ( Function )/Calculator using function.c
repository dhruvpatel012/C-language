#include<stdio.h>

// function declaration
int calculatorOp();  

// function definition
int calculatorOp(){ 
	
	int choice,num1,num2;
    char op;
	
	printf("\n\nPress 1 for +");
	printf("\nPress 2 for -");
	printf("\nPress 3 for *");
	printf("\nPress 4 for /");
	printf("\nPress 5 for %%");
	printf("\nPress 0 for Exit");
	
	printf("\n\nEnter your choice: ");
	scanf("%d",&choice);
	
	if(choice == 0){
		printf("\nSuccessfully Exit...\n");
		return 0; 
	}
	
	switch(choice){
		
		case 1: op = '+'; break;
		case 2: op = '-'; break;
		case 3: op = '*'; break;
		case 4: op = '/'; break;
		case 5: op = '%'; break;
		
		default:
			printf("\nInvalid Choice,try again...\n");
			return 1;
	}
	
	printf("\nEnter your first number: ");
	scanf("%d",&num1);
	
	printf("\nEnter your second number: ");
	scanf("%d",&num2);
	
	if(op == '+'){
	 	printf("\nAddition of %d and %d = %d\n",num1,num2,num1+num2);
	}
	else if(op == '-'){
	 	printf("\nSubtraction of %d and %d = %d\n",num1,num2,num1-num2);
	}
	else if(op == '*'){
	 	printf("\nMultiplication of %d and %d = %d\n",num1,num2,num1*num2);
	}
	else if(op == '/'){
	 	if(num2 == 0){
	 		printf("\nDivision by zero is not allowed,try again...\n");
		}
		else{
	 		printf("\nDivision of %d and %d = %.2f\n",num1,num2,(float)num1/num2);
		}
	}
	else if(op == '%'){
	 	if(num2 == 0){
	 		printf("\nModulo by zero is not allowed,try again...\n");
		}
		else{
	 		printf("\nModulo of %d and %d = %d\n",num1,num2,num1%num2);
		}
	}
	
	return 1;   // continue program
}

int main(){
	
	int state;
	
	printf("|| ===== Calculator ==== ||");
      
	while(1){
		state = calculatorOp(); //function calling
		
		if(state == 0){
			break; // stop loop 
		}
	}
	
	return 0;
}
