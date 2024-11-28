#include <stdio.h>

int Sum(int array[], int size) 
{
    int sum = 0;
    for (int i = 0; i < size; i++) 
	{
        sum += array[i]; 
    }
    return sum;
}

int main()
{
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
	{
        scanf("%d", &array[i]);
    }

    int total = Sum(array, n);

    printf("The sum of all elements in the array is: %d\n", total);

    return 0;
}