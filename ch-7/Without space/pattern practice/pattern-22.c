#include<stdio.h>

main()
{
	//A
	//B C
	//D E F
	//G H I J
	//K L M N O

	int i,j,count='A';
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",count++);
		}
		printf("\n");
	}
}