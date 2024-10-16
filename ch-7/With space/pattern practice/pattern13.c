#include<stdio.h>

main()
{
	//		  A
	//   	B A
	// 	  C B A
	//  D C B A
	//E D C B A

	int i,j,s;
	
	for(i=65;i<=69;i++)
	{
		for(s=69;s>i;s--)
		{
			printf("  ");
		}
		for(j=i;j>=65;j--)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}