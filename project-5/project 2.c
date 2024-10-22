#include <stdio.h>

main() 
{
    int row, col;

    printf("Enter The Row: ");
    scanf("%d", &row);
    printf("Enter The Col: ");
    scanf("%d", &col);

    int a[row][col];  
    int i,j,largest=0;

    printf("\n\n Array of Input \n\n");

    for (i = 0; i < row; i++)
	{
        for (j = 0; j < col; j++)
		{
            printf("Enter The Value for [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("\n Output of The largest Number");

    for (i = 0; i < row; i++) 
	{
        for (j = 0; j < col; j++) 
		{
			if (a[i][j]>largest) 
			{
                largest=a[i][j];
            }						
        }
        printf("\n");
    }  
    printf("The Largest Value Of in Array : %d",largest);
}