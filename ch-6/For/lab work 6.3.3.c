#include <stdio.h>

main()
{
    int n, i = 1;

    printf("Enter an integer : ");
    scanf("%d", &n);

    printf("Multiplication Table of %d : \n\n",n);
    
    for(i=1;i<=10;i++)
	{
        printf("%d x %d = %d\n", n, i, n * i);
    }
}
