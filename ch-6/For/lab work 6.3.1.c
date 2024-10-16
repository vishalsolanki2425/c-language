#include<stdio.h>

main()
{
	int n,i=0,sum=0;
	
	printf("Enter The Any Number : ");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		sum = i + sum;	
	}
	printf("The Number Sum is : %d",sum);
}