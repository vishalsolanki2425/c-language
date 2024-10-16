#include<stdio.h>

main()
{
   int n, a = 0, b = 1, c=0;
  
   printf("Enter Any Number : ");
   scanf("%d",&n);
   printf("Fibonacci Series : %d,%d,",a,b);
   
   do
   {
	    c = a + b;
	    a = b;
	    b = c;
	              
	    printf("%d,",c);
	    
    }while(c<=n);
}