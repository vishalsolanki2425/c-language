#include <stdio.h>
#include <string.h>

void main()
{
    char string[100];
    
    printf("Enter the string: ");
    scanf("%s",&string);
    
    for (int i = 0; i<strlen(string); i++)
    {
    	int feq = 1;
    	
        for(int j=i+1; j<strlen(string); j++)
        {
        	if(string[i]==string[j])
        	{
        		feq++;
        		string[j]='\0';
			}
		}
		if(string[i]!='\0')
			printf("%c => %d\n",string[i], feq);
    }
}