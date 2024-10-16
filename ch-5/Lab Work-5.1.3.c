#include<stdio.h>

main()
{
	int s1,s2,s3,ans;
	
	printf("Enter The Value s1 = ");
	scanf ("%i",&s1);
	printf("Enter The Value s2 = ");
	scanf ("%i",&s2);
	printf("Enter The Value s3 = ");
	scanf ("%i",&s3);	
	
	ans=(s1+s2+s3)/3;
	printf("Average mark = %i",ans);
}