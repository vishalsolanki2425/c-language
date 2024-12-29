#include <stdio.h>

int DivisibleBy3And5(int number)
{
    return (number % 3 == 0 && number % 5 == 0);
}

int main() 
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (DivisibleBy3And5(number)) 
	{
        printf("%d is divisible by both 3 and 5 \n", number);
    } 
	else 
	{
        printf("%d is not divisible by both 3 and 5 \n", number);
    }

    return 0;
}