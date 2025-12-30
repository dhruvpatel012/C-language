#include<stdio.h>

int main(){
	
	int score;
	char grade;
	
	printf("Enter your score out of 100: ");
	scanf("%d",&score);
	
	//Step-1: Grade Calculation
    grade = (score<=100 && score>=80)? 'A' : 
	(score<80 && score>=60)? 'B' : 
	(score<60 && score>=40)? 'C' : 
	(score<40 && score>=30)? 'D' : 
	(score<30 && score>=0)? 'F' : printf("Invalid Score.");
	
	//Step-2: Additional Comments
	 switch(grade){
	case 'A':
		printf("Youre Grade is %c.Excellent Work.",grade);
		break;
		
    case 'B':
		printf("Youre Grade is %c.Well Done.",grade);
		break;
		
	case 'C':
		printf("Youre Grade is %c.Good Job.",grade);
		break;
		
	case 'D':
		printf("Youre Grade is %c.You passed,but you could do better.",grade);
		break;
		
	case 'F':
	printf("Your Grade is %c.Sorry,you faild.",grade);
		
	default:
		printf("");
	}
 
   //Step-3: Eligibility Check
   if(score <=100 && score>=30){
 	     printf(" Congratulations!! You are eligible for the next level");
    }
   else{
 	printf(" Please try again next time");
   }
	
	return 0;
}

