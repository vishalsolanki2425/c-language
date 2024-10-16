#include<stdio.h>

main()
{
	//1
	//1 0
	//1 0 1
	//1 0 1 0
	//1 0 1 0 1

	int i,j;
	
	for(i=1;i<=5;i++)
	{		
		for(j=1;j<=i;j++)
		{
			printf("%d",j%2==1); 
		}
		printf("\n");
	}	
}