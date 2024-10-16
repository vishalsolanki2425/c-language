#include<stdio.h>

main()
{
	int mark;
	char grade;
	
	printf("Enter The Mark (out of 100) : ");
	scanf("%d",&mark);
	
	grade =	(mark >= 90) 
			? 'A' :
		    (mark >= 80)
				? 'B' :
		    (mark >= 70)
				? 'C' :
		    (mark >= 60)
				? 'D' : 
			(mark >= 50) 
				? 'E'  :
		    (mark >= 33)
				? 'F'  : 'f';	
		
	    printf("Your grade is %c.\n", grade);

    switch(grade) 
	{
        case 'A':
            printf("Excellent work\n");
            break;
        case 'B':
            printf("Well done\n");
            break;
        case 'C':
            printf("Good job\n");
            break;
        case 'D':
            printf("Good job, but you could do better.\n");
            break;
           case 'E':
            printf("You passed, but you could do better.\n");
            break;    
        case 'F':
            printf("Sorry, you failed.\n");
            break;
        default:
            printf("Invalid grade.\n");
    }	
    
    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D'|| grade == 'E')
	{
		printf("Congratulations! You are eligible for the next level.\n");
   	} 
	else 
	{
        printf("Please try again next time.\n");
    }
}