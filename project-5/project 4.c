#include <stdio.h>

main()
{
    int row, col;

    printf("Enter The Row: ");
    scanf("%d", &row);
    printf("Enter The Col: ");
    scanf("%d", &col);

    int a[row][col];
    int i, j;

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

    printf("\n\n Array of Output \n\n");

    for (i = 0; i < row; i++)
	{
        for (j = 0; j < col; j++)
		{
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

	int r,sum=0;
	
	printf("\nEnter The Row: ");
    scanf("%d", &r);

    for (i = 0; i < row; i++)
	{
        for (j = 0; j < col; j++)
		{
            if (r==i)
			{
                printf("%d ",a[i][j]);
                sum += a[i][j];
            }
        }
    }
	printf("\nThe Sum of Row : %d",sum);
	
	printf("\n\nEnter The Colmn: ");
    scanf("%d", &r);
	sum=0;
    for (i = 0; i < row; i++)
	{
        for (j = 0; j < col; j++)
		{
            if (r==j)
			{
                printf("%d ",a[i][j]);
                sum += a[i][j];
            }
        }
    }
	printf("\nThe Sum of Colmn : %d",sum);
}