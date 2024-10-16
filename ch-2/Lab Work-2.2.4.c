#include<stdio.h>

main()
{
	int p,r,n,area;
	
	printf("Enter The Value r = ");
	scanf("%i",&r);
	printf("Enter The Value p = ");
	scanf("%i",&p);
	printf("Enter The Value n = ");
	scanf("%i",&n);
	
	area =p*r*n/100;
	printf("Area of Simple interest = %i",area);
}