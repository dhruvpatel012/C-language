#include <stdio.h>

int main()
{
    char str[100];
    int freq[256] = {0};   // to store frequency of characters
    int i;

    printf("Enter any string: ");
    scanf("%s", str);

    // count frequency of each character
    for (i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }

    printf("\nFrequency of each letter:\n");

    // print frequency (only once per character)
    for (i = 0; str[i] != '\0'; i++)
    {
        if (freq[str[i]] != 0)
        {
            printf("%c => %d\n", str[i], freq[str[i]]);
            freq[str[i]] = 0;   // mark as printed
        }
    }

    return 0;
} 
