#include<stdio.h>

main()
{
	int a=12,b=6;
	
	printf("Addition of %d and %d is %i\n",a,b,a+b);
	printf("Subtraction of %d and %d is %i\n",a,b,a-b);
	printf("Multiplication of %d and %d is %i\n",a,b,a*b);
	printf("Division of %d and %d is %i\n",a,b,a/b);
	printf("Modulo of %d and %d is %i\n\n",a,b,a%b);

	printf(" %d + %d = %i\n",a,b,a+b);		
	printf(" %d - %d = %i\n",a,b,a-b);
	printf(" %d * %d = %i\n",a,b,a*b);
	printf(" %d / %d = %i\n",a,b,a/b);
	printf(" %d %% %d = %i\n",a,b,a%b);
}