#include<stdio.h>

void main()
{
	int a,b,c,d;
	
	printf("Enter The Value a = ");
	scanf ("%d",&a);
	printf("Enter The Value b = ");
	scanf ("%d",&b);
	printf("Enter The Value c = ");
	scanf ("%d",&c);
	printf("Enter The Value d = ");
	scanf ("%d",&d);
			
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("%d is maximum",a);		
			}
			else
			{
				printf("%d is maximum",d);
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("%d is maximum",b);
			}
			else
			{
				printf("%d is maximum",d);
			}
		}
		else
		{
			if(c>d)
			{
				printf("%d is maximum",c);
			}
			else
			{
				printf("%d is maximum",d);
			}
		}
	}
}	