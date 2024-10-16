#include<stdio.h>

main()
{
	int size;
	
	printf("Enter array size : ");
	scanf("%d",&size);
	
	int a[size],i;
	
	printf("\n\n Array Input \n\n");
	
	for(i=0;i<size;i++)
	{
		printf("Enter array elements %d : ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n\n Array output \n\n");
	
	printf("Length of an Array : %d",size);
}