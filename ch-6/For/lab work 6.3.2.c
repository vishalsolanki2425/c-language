#include <stdio.h>

main() 
{
	
    int N,i=1,factorial=1;

    printf("Enter Any Number: ");
    scanf("%d", &N);

    for(i=1;i<=N;i++) 
	{
	    factorial = i * factorial;
    }
	printf("Factorial of %d = %d\n",N,factorial);
}