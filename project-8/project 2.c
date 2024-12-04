#include <stdio.h>

void cube(int *row, int *col, int array[*row][*col])
{
	for(int i=0; i<*row; i++)
	{
		for(int j=0; j<*col; j++)
		{
			int cube = array[i][j] * array[i][j] * array[i][j];
			printf("%d ", cube);
		}
		printf("\n");
	}
}

int main() 
{
    int row, col;

    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int array[row][col];

    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

	cube(&row,&col,array);
    
    return 0;
}