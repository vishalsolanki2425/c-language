#include <stdio.h>

int Divisible(int number) 
{
    if (number % 3 == 0 && number % 5 == 0)
	{
        return 1;
	}
    return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(Divisible(num))
	{
        printf("The number %d is divisible by both 3 and 5\n", num);
    } 
	else 
	{
        printf("The number %d is not divisible by both 3 and 5\n", num);
    }
    return 0;
}
