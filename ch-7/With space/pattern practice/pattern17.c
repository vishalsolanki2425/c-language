#include<stdio.h>

main()
{
	//		  1
	// 		1 0
	// 	  1 0 1
	//  1 0 1 0
	//1 0 1 0 1

	int i,j,s;
	
	for(i=1;i<=5;i++)
	{
		for(s=5;s>i;s--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			(j%2==0)
					? printf("0")
					: printf("1");
		}
		printf("\n");
	}
}