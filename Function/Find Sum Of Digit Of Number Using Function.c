#include <stdio.h>

// function to find sum of digits using recursion
int sumOfNumber(int n)
{
    // base condition
    if (n == 0){
    	 return 0;
	}

    // recursive call
    return (n % 10) + sumOfNumber(n / 10);
}

int main()
{
    int n;

    printf("Enter any number: ");
    scanf("%d", &n);

    printf("\nSum Of Number is: %d", sumOfNumber(n));

    return 0;
}


// Debug:- 
//
//sumOfNumber(345)
//= 5 + sumOfNumber(34)
//= 5 + 4 + sumOfNumber(3)
//= 5 + 4 + 3 + sumOfNumber(0)
//= 12


