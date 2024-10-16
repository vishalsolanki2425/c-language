#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("Enter The Value a = ");
	scanf ("%d",&a);
	printf("Enter The Value b = ");
	scanf ("%d",&b);
	printf("Enter The Value c = ");
	scanf ("%d",&c);
		
	if(a<b)
	{
		if(a<c)
		{
			printf("%d is minimum",a);	
		}
		else
		{
			printf("%d is minimum",c);
		}
	}
	else
	{
		if(b<c)
		{
			printf("%d is minimum",b);
		}
		else
		{
			printf("%d is minimum",c);
		}
	}
}	