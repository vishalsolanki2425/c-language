#include<stdio.h>

main()
{
	// * * *
	// * 	*
	// * 	*
	// * * *
	// * 	*
	// * 	*
	// * * *
	
	int i,j;
	
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(((i==1 || i==7 || i==4) && (j<=3) || (j==1))  ||  ((i==2 || i==3 || i==5 || i==6) && (j==4)))
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
			printf("\n");
	}
}