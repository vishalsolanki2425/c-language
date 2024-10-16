#include <stdio.h>

main()
{
    int number, first, last, sum;

    printf("Enter a number : ");
    scanf("%d", &number);

    last = number % 10;

    first = number;
    
    while (first >= 10)
	{
        first /= 10;
    }

	sum = first + last;

    printf("Sum of first and last digit: %d\n", sum);
}