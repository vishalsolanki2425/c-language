#include<stdio.h>

main()
{
	
	//1 0 1 0 1
	//1 0 1 0
	//1 0 1
	//1 0
	//1
	
	int i,j;
	
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j%2);
		}
		printf("\n");
	}
}