#include <stdio.h>

int main() 
{
    int row, col;

    printf("Enter The Row: ");
    scanf("%d", &row);
    printf("Enter The Col: ");
    scanf("%d", &col);

    int a[row][col],b[row][col],sum[row][col
	];  
    int i, j;

    printf("\n\n Array of Input 1 \n\n");

    for (i = 0; i < row; i++)
	{
        for (j = 0; j < col; j++)
		{
            printf("Enter The Value for [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n Array of Input 2 \n\n");
    for (i = 0; i < row; i++)
	{
        for (j = 0; j < col; j++)
		{
            printf("Enter The Value for [%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    printf("\n\n Array of Output 1 \n\n");

    for (i = 0; i < row; i++) 
	{
        for (j = 0; j < col; j++) 
		{
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
     printf("\n\n Array of Output 2 \n\n");
	for (i = 0; i < row; i++)
	{
        for (j = 0; j < col; j++) 
		{
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }	
    
	  printf("\n\n Array Sum of Output \n\n");
	for (i = 0; i < row; i++)
	{
        for (j = 0; j < col; j++) 
		{
           sum[i][j] = a[i][j] + b[i][j];
		    printf(" %d",sum[i][j]);
	    }
        printf("\n");
    }    
}