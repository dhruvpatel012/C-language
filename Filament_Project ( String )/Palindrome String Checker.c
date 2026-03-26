#include<stdio.h>

int main() {
    char str[20];
    int i, j, count = 0;

    printf("Enter any string: ");
    scanf("%s", str);

    // find last index
    for (j = 0; str[j] != '\0'; j++); //; means loop body is empty

    j = j - 1;   // last character index

    // compare from start and end
    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {//give different value of i & j than value of count assign to 1
            count = 1; 
            break;
        }
    }

    if (count == 0){
        printf("\nThe give string is Palindrome !!");
    }
    else{
        printf("\nThe give string is not Palindrome !!");
    }
    
    

    return 0;
}

