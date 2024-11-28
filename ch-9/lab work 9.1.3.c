#include<stdio.h>

main()
{
	char name[30];
	
	printf("Enter Any String  : ");
	scanf("%[^\n]",&name);

	printf("\n\n");
	printf("name\t : %s\n",name);
	
	int i;
	
	for(i=0; name[i]!='\0'; i++)
	{
		if(name[i]>=65 && name[i]<=90)
		{
		   name[i] += 32;
		}
		else if(name[i]>=97 && name[i]<=122)
		{
           name[i] -= 32;
		}
    }
    printf("name\t : %s",name);
}