#include<stdio.h>

main()
{
	//5 4 3 2 1
	//  4 3 2 1
	//    3 2 1
	//      2 1
	//	 	  1
	int i,j,s;
	
	for(i=5;i>=1;i--)
	{
		for(s=5;s>i;s--)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}