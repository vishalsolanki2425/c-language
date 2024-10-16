#include<stdio.h>

main()
{
	//A B C D E
	//  A B C D
	//    A B C
	//      A B
	// 	   	  A


	int i,j,s;
	
	for(i=69;i>=65;i--)
	{
		for(s=i;s<69;s++)
		{
			printf("  ");
		}
		for(j=65;j<=i;j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}