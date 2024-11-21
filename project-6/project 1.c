#include <stdio.h>

main() 
{
    char str[100], rev[100];
    int length = 0, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

	int i;

    for (i = 0; str[i] != '\0'; i++) 
	{
        length++;
    }

    for (i = 0; i < length; i++) 
	{
        rev[i] = str[length - i - 1];
    }
    rev[length] = '\0'; 

    for (i = 0; i < length; i++)
	{
        if (str[i] != rev[i]) 
		{
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
	{
        printf("The string is a palindrome\n");
    } 
	else 
	{
        printf("The string is not a palindrome\n");
    }
}