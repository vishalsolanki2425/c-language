#include <stdio.h>

main()
{
    int startyear, endyear;
    

   printf("Enter the start year: ");
    scanf("%d", &startyear);
    printf("Enter the end year: ");
    scanf("%d", &endyear);

    printf("Leap years between %d and %d are : ", startyear, endyear);

    while (startyear <= endyear)
	{
       if (startyear % 4 == 0)
		{
            printf("%d\t", startyear);
        }
        startyear++;
    }
}