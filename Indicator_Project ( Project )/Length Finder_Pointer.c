#include<stdio.h>

int main(){
	
	char str[50];
	char *ptr;
	int length = 0,i;
	
	printf("Enter any string:");
	gets(str); //count space,don't break a code
	
	ptr = str;
	
	for(i=0; ptr[i]!='\0'; i++){
		length++;
	}
	
	printf("\nThe length of a string is: %d", length);

    return 0;
}
