#include<stdio.h>

main()
{
	//	      1
	//      1 2
	//    1 2 3
	//  1 2 3 4
	//1 2 3 4 5

	int i,j,s;
	
	for(i=1;i<=5;i++)
	{
		for(s=5;s>i;s--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j); 
		}
		printf("\n");
	}	
}