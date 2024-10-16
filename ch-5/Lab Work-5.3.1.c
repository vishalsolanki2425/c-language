#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	printf("Enter the value of c : ");
	scanf("%d",&c);		
	
	(a<b)
		? (a<c)
			?	printf("%d is minimum",a)
			:	printf("%d is minimum",c)
		: (b<c)
			?	printf("%d is minimum",b)
			:	printf("%d is minimum",c);
}