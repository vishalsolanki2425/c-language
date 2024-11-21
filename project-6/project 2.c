#include <stdio.h>

main()
{
    char string1[100];
    int freq[256] = {0}; 
    
    printf("Enter the string: ");
    scanf("%s", string1);
    
    for (int i = 0; string1[i] != '\0'; i++)
    {
        freq[string1[i]]++;
    }

    printf("Character frequencies in the string:\n");
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 0) 
        {
            printf("%c: %d\n", i, freq[i]);
        }
    }
}