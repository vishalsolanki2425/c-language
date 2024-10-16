#include<stdio.h>

main()
{
	int i=1,n;
	
	printf("Enter The Any Numaber : ");
	scanf("%d",&n);
		
	do
	{
		if(i%2==0)
		{
		printf("%d\t",i);
		}
		i++;
		
	}while(i<=n);
}