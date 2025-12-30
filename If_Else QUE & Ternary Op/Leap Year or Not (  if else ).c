#include<stdio.h>
#include<conio.h>

int main(){
	
	int year;
	
	printf("Enter Year: ");
	scanf("%d",&year);
	
	if(year %400 == 0){
		printf("Year is leap year");
	}
	
	else if(year %100 == 0){
		printf("Not a leap year");
	}
	
	else if(year %4 == 0){
		printf("Year is leap year");
	}
	
	else{
		printf("Not a leap year");
	}
	
	return 0;
}


//second method:-

//#include <stdio.h>
//
//int main() {
//    int year;
//
//    printf("Enter a year: ");
//    scanf("%d",&year);
//
//    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//        printf("Leap Year");
//    } else {
//        printf("Not a Leap Year");
//    }
//
//    return 0;
//}
