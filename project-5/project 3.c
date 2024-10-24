#include <stdio.h>

main() 
{
    int row, col;

    printf("Enter The Row: ");
    scanf("%d", &row);
    printf("Enter The Col: ");
    scanf("%d", &col);

    int a[row][col];
    int i,j;

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
    
    printf("\n Output of The Number\n");
    
	for (i = 0; i < row; i++) 
	{
        for (j = 0; j < col; j++) 
		{
            printf("%d ", a[j][i]);						
        }
        printf("\n");
    }  
}