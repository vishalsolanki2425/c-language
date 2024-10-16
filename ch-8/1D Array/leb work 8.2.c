#include<stdio.h>

main()
{
	int size;
	
	printf("Enter array size : ");
	scanf("%d",&size);
	
	printf("\n\n Array Input \n\n");
	
	int a[size],i;
		
	for(i=0;i<size;i++)
	{
		printf("Enter array elements %d : ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n\n Array output \n\n");	
	
	{
		printf("%d \t",a[i]);
	}
	
	int sum=0;
	
	for(i=0; i<size; i++)
	{
		sum += a[i];
	}
	printf("\n\n");
	printf("sum : %d",sum);
	printf("\n\n");
	
	printf("Average of an Array : %0.2f",(float)sum/size);
}