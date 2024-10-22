#include <stdio.h>

int main() 
{
    int row, col;

    printf("Enter The Row: ");
    scanf("%d", &row);
    printf("Enter The Col: ");
    scanf("%d", &col);

    int a[row][col];  
    int i, j;
    int sum = 0;
    
    if(row==col)
	{

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
    
		for(i=0;i<row;i++)
		{
			sum = sum + a[i][j];
		}
        printf("\nSum of all elements: %d\n", sum);
	}
    else
	{
		printf("\n Enter The Same Number in Row & Colmn");
	}
}