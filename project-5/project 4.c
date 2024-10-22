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

	printf("\nEnter The Row: ");
    scanf("%d", &row);

    for (i = 0; i < row; i++)
	{
        for (j = 0; j < col; j++)
		{
            if (i==0 && i<=row)
			{
                printf("%d ", i);
            }
			else
			{
                printf(" ");
            }
        }
        printf("\n");
    }

	printf("Enter The Col: ");
    scanf("%d", &col);

	for (i = 0; i < row; i++)
	{
        for (j = 0; j < col; j++)
		{
            if (j==0 && j<=col)
			{
                printf("%d ", j);
            }
			else
			{
                printf(" ");
            }
        }
        printf("\n");
    }
}