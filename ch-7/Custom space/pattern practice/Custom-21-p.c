#include<stdio.h>

main()
{
	// * * * *
	// *	 *
	// * 	 *
	// * * * *
	// *
	// *
	// *
	
	int i,j;
	
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=4;j++)
		{
			if( j==1 || i==1 || i==4 || (j==4 && (i==2 || i==3)) )
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