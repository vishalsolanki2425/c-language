#include<stdio.h>

main()
{
	char letter = 'a';
	
	do
	{
		printf("%c ", letter);  
        letter = 4 + letter; 
	
	}while(letter <= 'z');
}