#include<stdio.h>
#include<conio.h>

int main(){

     int score;
     char grade;
     
     printf("Enter Youre Score Out of 100: ");
     scanf("%d",&score);
     
     if(score>=90){
     	grade = 'A';
	 }
	 
	 else if(score>=80){
     	grade = 'B';
	 }
	 
	 else if(score>=70){
     	grade = 'C';
	 }
	
     else if(score>=60){
     	grade = 'D';
	 }
	 
	 else if(score>=50 ){
     	grade = 'E';
	 }
	 
	 else{
     	printf("\nSorry !! You'r Fail...Better Luck Next Time");
	 }
	
	
	if(score>=50){
		printf("\nGrade = %c",grade);
	}
	
	
	return 0;
}
