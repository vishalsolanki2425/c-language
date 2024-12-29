#include <stdio.h>

int main()
{
    int number, first, last, sum;

    printf("Enter a three digit positive Number : ");
    scanf("%d", &number);

    if (number < 100 || number > 999)
	{
        printf("Error : Please enter a valid positive Number !!! \n");
        return 1;
    }

    last = number % 10;

    first = number / 100;

   sum = first + last;

	printf("\n");
	
    printf("The sum of the first and last digits is : %d\n", sum);

    return 0;
}