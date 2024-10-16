#include<stdio.h>

main()
{
	
	//A
	//B A
	//C B A
	//D C B A
	//E D C B A
	
	char character;
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		character = 'A' + i; 
		
		for(j=1;j<=i;j++)
		{
			printf("%c ", character - j); 
		}
		printf("\n");
	}
}