#include<stdio.h>

main()
{
	int c,f;
	printf("enter the value Celsius=");
	scanf("%i",&c);
	
	f=(c*9/5)+32;
	printf("converts temperature from degrees Celsius to Fahrenheit = %i",f);	
}