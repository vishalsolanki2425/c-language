#include <stdio.h>

main()
{
    int n;

    printf("Enter the Value of the array : ");
    scanf("%d", &n);

    int a[n];
    int i,j;

    printf("\n Enter The Value of %d :\n", n);
    
    for(i=0;i<n;i++) 
	{
        scanf("%d", &a[i]);
    }

    printf("\n Negative Value output :\n");
    
	printf(" Negative Value : ", a[i]);
    for(i=0;i<n;i++)
	{
        if(a[i]<0) 
		{
            printf("%d ", a[i]);
        }
    }
}