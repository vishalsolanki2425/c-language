#include<stdio.h>

main()
{
	int i=1,n;
	
	printf("Enter The Value : ");
	scanf("%d",&n);
	
	while(n>=i)
	{
		if(n%2==1)
		{
			printf("%d\t",n);
		}
		n--;
	}
}