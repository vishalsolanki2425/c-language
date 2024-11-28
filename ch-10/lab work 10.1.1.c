#include <stdio.h>

int cube(int number) 
{
    return number * number * number;
}

int main() 
{
    int num;

   printf("Enter a number: ");
    scanf("%d", &num);

    printf("The cube of %d is %d.\n", num, cube(num));

    return 0;
}