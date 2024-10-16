#include<stdio.h>

main()
{
	int n,i=0,sum=0;
	
	printf("Enter The Any Number : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum = i + sum;
		i++;	
	}
	printf("%d",sum);
}