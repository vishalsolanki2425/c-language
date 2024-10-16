#include<stdio.h>

main()
{
	const float pi=3.14;
	float r,area;
	
	printf("Enter The Value r = ");
	scanf("%f",&r);
	
	area = pi*r*r;
	printf("The Radius of area = %.2f",area);
}