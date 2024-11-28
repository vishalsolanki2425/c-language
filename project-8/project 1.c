#include <stdio.h>
#include <string.h> 

int Length(const char *str) 
{
    const char *ptr = str; 
    int length = 0;

    while (*ptr != '\0') 
    {
        length++;
        ptr++;
    }
    return length;
}

int main()
{
    char string[100];

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    char *line = strchr(string, '\n');
    if (line) 
    {
        *line = '\0';
    }

    int length = Length(string);
    
    printf("The length of the string is: %d\n", length);

    return 0;
}
