#include <stdio.h>

int main() {
    int length, i;
    int a[100];

    // Take array size
    printf("Enter the array length: ");
    scanf("%d",&length);

    // Take array elements
    printf("\nEnter array elements:\n");
    for(i = 0; i < length; i++) {
        printf("a[%d] = ", i);
        scanf("%d",&a[i]);
    }

    // Print negative elements
    printf("\nNegative elements from an Array: ");
    for(i = 0; i < length; i++) {
        if(a[i] < 0) {
            printf("%d,",a[i]);
        }
    }

    return 0;
}

