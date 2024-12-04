#include <stdio.h>
#include <string.h>

void main()
{
	char str[20];
	
	printf("Enter any string : ");
	gets(str);
	
	int len = 0;
	
	int *ptr;
	
	ptr = &len;
	
	
	for(int i=0; str[i]!='\0'; i++)
	{
		(*ptr)++;
	}
	
	printf("String Length : %d",*ptr);
}