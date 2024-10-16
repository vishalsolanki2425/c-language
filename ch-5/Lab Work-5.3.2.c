#include<stdio.h>

main()
{
	printf("Press 1 for English\n");
	printf("Press 2 for Hindi\n");
	printf("Press 3 for Gujarati\n");
	printf("\n");
	
	int number;
	
	printf("Enter the Number : ");
	scanf("%d",&number);
	
	switch(number)
	{
		case 1: 
			printf("Press 1 for Internet Recharge\n");
			printf("Press 2 for Top-up Recharge\n");
			printf("Press 3 for Special Recharge\n\n");
			
				printf("Enter the Recharge Plan Press Number: ");
	            scanf("%d",&number);
	            
	            printf("\n");
						switch(number)
						{
							case 1:
								printf("You have successfully done Internet Recharge.");
								break;
							case 2:
								printf("You have successfully done Top-up Recharge.");
								break;
							case 3:
								printf("You have successfully done Special Recharge.");
								break;	
							default:
								printf("Enter the valid choice !!!");
						}
			break;
		case 2: 
			printf("Internet Recharge ke liye 1 dabaiye\n");
			printf("Top-up Recharge ke liye 2 dabaiye\n");
			printf("Special Recharge ke liye 3 dabaiye\n\n");
			
				printf("Recharge ke liye number dabaiye : ");
	            scanf("%d",&number);
	            
				printf("\n");
						switch(number)
						{
							case 1:
								printf("apka safltapurvk Internet Recharge ho gaya hee.");
								break;
							case 2:
								printf("apka safltapurvk Top-up Recharge ho gaya hee.");
								break;
							case 3:
								printf("apka safltapurvk Special Recharge ho gaya hee.");
								break;	
							default:
								printf("Enter the valid choice !!!");
						}
			break;		
			case 3: 
			printf("Internet Recharge mate 1 dabavo\n");
			printf("Top-up Recharge mate 2 dabavo\n");
			printf("Special Recharge mate 3 dabave\n\n");
			
				printf("Recharge mate number dabavo : ");
	            scanf("%d",&number);
	            
	            printf("\n");
						switch(number)
						{
							case 1:
								printf("tamaru Internet Recharge safaltapurvk thay gayu che.");
								break;
							case 2:
								printf("tamaru top-up Recharge safaltapurvk thay gayu che.");
								break;
							case 3:
								printf("tamaru Special Recharge safaltapurvk thay gayu che.");
								break;	
							default:
								printf("Enter the valid choice !!!");
						}
			break;		
		default:
			printf("Enter the valid choice !!!");	
	}
}