#include <stdio.h>

void sumArrays(int *array1, int *array2, int *result, int size) 
{
    for (int i = 0; i < size; i++) 
	{
        *(result + i) = *(array1 + i) + *(array2 + i);
    }
}

int main() 
{
    int size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size], result[size];

    printf("Enter elements of the first array:\n");
    
    for (int i = 0; i < size; i++) 
	{
        scanf("%d", &array1[i]);
    }

    printf("Enter elements of the second array:\n");
    
    for (int i = 0; i < size; i++) 
	{
        scanf("%d", &array2[i]);
    }

    sumArrays(array1, array2, result, size);

    printf(" array of sum :\n");
    
    for (int i = 0; i < size; i++) 
	{
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
