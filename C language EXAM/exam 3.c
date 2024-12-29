#include <stdio.h>

main() 
{
	int i,j;
    
    for (i = 0; i < 5; i++) 
	{
        for (j = 0; j < i; j++)
		{
            printf("_ ");
        }
        for (j = 10 - i; j >= 6; j--) 
		{
            printf("%d ", j);
        }
        printf("\n");
    }
}
