#include<stdio.h>

main()
{
	int x,y;
	
	printf("Enter The Value x = ");
	scanf ("%i",&x);
	printf("Enter The Value y = ");
	scanf ("%i",&y);
	
	if(x<y)
	{
		printf("x is minimum");	
	}
	else
	{
		printf("y is minimum");	
	}	
}