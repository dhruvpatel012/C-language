#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 7; i++) {
        for (j = 1; j <= 5; j++) {
        	
            if (j == 1 ||((i == 1 || i == 7) && j < 5) ||(j == 5 && i != 1 && i != 7)) {
                printf("*");
            } else {
                printf(" ");
            }
            
        }
        printf("\n");
    }

    return 0;
}



//output:-
//
//   ****
//   *   *
//   *   *
//   *   *
//   *   *
//   *   *
//   ****

//Logic:-

// j == 1 print left line
// i == 1 or i == 7 print top and bottom line
// j == 5 print right side line
