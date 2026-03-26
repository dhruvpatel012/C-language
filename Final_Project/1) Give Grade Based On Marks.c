#include<stdio.h>

int main(){
   
   int phy,chem,maths,eng,computer,avg;
   
   //take 5 subjects marks from user 
   printf("Enter a marks of Physics (0 to 100): ");
   scanf("%d",&phy);
   
   printf("\nEnter a marks of Chemistry (0 to 100): ");
   scanf("%d",&chem);
   
   printf("\nEnter a marks of Maths (0 to 100): ");
   scanf("%d",&maths);
   
   printf("\nEnter a marks of English (0 to 100) ");
   scanf("%d",&eng);
   
   printf("\nEnter a marks of Computer (0 to 100): ");
   scanf("%d",&computer);
   
   // find average of 5 subjects
   avg = (phy + chem + maths + eng + computer) / 5;
   
   printf("\n\nAverage Of All Subject Is:%d",avg);
   
   //give a grade,based on marks
   if(avg<=100 && avg>90){
   	  printf("\n\nCongratulations...you achive an 'A' grade");
   }
   
   else if(avg<=90 && avg>80){
   	   printf("\n\nCongratulations...you achive an 'A-' grade");
   }
   
    else if(avg<=80 && avg>70){
   	   printf("\n\nGood...you achive an 'B+' grade");
   }
   
    else if(avg<=70 && avg>60){
   	   printf("\n\nyou achive an 'B-' grade");
   }
   
    else if(avg<=60 && avg>50){
   	   printf("\n\nyou achive an 'C+' grade");
   }
   
    else if(avg<=50 && avg>40){
   	   printf("\n\nyou achive an 'C-' grade");
   }
   
    else if(avg<=40 && avg>35){
   	   printf("\n\nyou achive an 'D' grade");
   }
   
   else{
   	printf("\n\nYou are fail,better luck next time..!!");
   }
   
	return 0;
}
