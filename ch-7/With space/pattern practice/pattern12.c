#include<stdio.h>

main()
{
	//			  *
	//  		* *
	// 	      * * *   
	//      * * * *
	// 	  * * * * *

	int i,j,s;
	
	for(i=5;i>=1;i--)
	{
		for(s=1;s<i;s++)
		{
			printf(" ");
		}
		for(j=5;j>=i;j--)
		{
			printf("*",j);
		}
		printf("\n");
	}
}