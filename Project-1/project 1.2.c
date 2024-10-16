#include<stdio.h>

main()
{
	int salary,gs,hra,da,ta;
	printf("emter the Salary =");
	scanf("%i",&salary);
	printf("emter the hra =");
	scanf("%i",&hra);
	printf("emter the da =");
	scanf("%i",&da);
	printf("emter the ta =");
	scanf("%i",&ta);
	
	hra=salary*hra/100;
	da=salary*da/100;
	ta=salary*ta/100;
	
	gs=salary+hra+da+ta;
	
	printf("Gross Salary = %i",gs);
}