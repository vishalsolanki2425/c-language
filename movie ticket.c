#include<stdio.h>

main()
{
	printf(" Welcome TO Cinema\n\n");
		
	printf("press 1 Bollywood\n");
	printf("press 2 Tollywood\n");
	printf("press 3 Hollywood\n");
	printf("\n");
	
	int number,price,totalprice,gst;
	
	printf("Enter The Choice Movie and Press Number :");	
	scanf("%d",&number);
	
	switch(number)
	{	 	
		case 1:	
			printf("Bollywood");
			printf("\n\n");
				printf("press 1 Comedy Movie\n");
				printf("press 2 Romantic Movie\n");
				printf("press 3 Horror Movie\n");
				printf("press 4 Action Movie\n");				
				printf("\n");
				printf("Enter The Choice Movie Type :");	
		        scanf("%d",&number);
		            
		            switch(number)
					{
						case 1:
							printf("Comedy Movie");
							printf("\n\n");
							printf("press 1 Luv Ki Arrange Marriage Movie\n");
							printf("press 2 Munjya Movie\n");
							printf("press 3 Bad Newz Movie\n");
							printf("press 4 Woh Bhi Din The movie\n");	
							printf("\n");	
							printf("Enter The Choice Movie Name :");	
		            		scanf("%d",&number);
		            		
		            		switch(number)
		            		{
								case 1:
									printf("Luv Ki Arrange Marriage Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 2:
									printf("Munjya Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
										default:
											printf("Enter The Valid Choice....!!!");
									}
									break;
								case 3:
									printf("Bad Newz Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
										default:
											printf("Enter The Valid Choice....!!!");
									}
									break;
								case 4:
									printf("Woh Bhi Din The movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
										default:
											printf("Enter The Valid Choice....!!!");
									}
									break;			
									default:
										printf("Enter The Valid Choice....!!!");
							}
						break;
						case 2:
							printf("Romantic Movie");
							printf("\n\n");
							printf("press 1 Love Hostel Movie\n");
							printf("press 2 Badhaai Do Movie\n");
							printf("press 3 Shiddat Movie\n");
							printf("press 4 Love Aaj Kal movie\n");	
							printf("\n");	
							printf("Enter The Choice Movie Name :");	
		            		scanf("%d",&number);
		            		
		            		switch(number)
		            		{
								case 1:
									printf("Love Hostel Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
										default:
											printf("Enter The Valid Choice....!!!");
									}
									break;
								case 2:
									printf("Badhaai Do Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
													printf("Bronze Seat Price 150\n\n");
													printf("How Many Seats Do You Want? : ");
													scanf("%d",&number);
														printf("\n");
														printf("==============================================================\n");
														printf("     		   YOUR MOVIE BOOKING BILL         \n");
														printf("==============================================================\n\n");
																printf("\tYour Booking Seats : %d\n",number);
																printf("\tPrice (Without gst) : ");
																totalprice = price*number;
																printf("%d",totalprice);
																printf("\n");
																gst = totalprice*18/100;
																printf("\tGst is : %d",gst);
																printf("\n");
																printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
														printf("==============================================================\n");
													break;
												case 200:
													printf("Sliver Seat Price 200\n\n");
													printf("How Many Seats Do You Want? : ");
													scanf("%d",&number);
														printf("\n");
														printf("==============================================================\n");
														printf("     		   YOUR MOVIE BOOKING BILL         \n");
														printf("==============================================================\n\n");
																printf("\tYour Booking Seats : %d\n",number);
																printf("\tPrice (Without gst) : ");
																totalprice = price*number;
																printf("%d",totalprice);
																printf("\n");
																gst = totalprice*18/100;
																printf("\tGst is : %d",gst);
																printf("\n");
																printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
														printf("==============================================================\n");
													break;	
												case 250:
													printf("Gold Seat Price 250\n\n");
													printf("How Many Seats Do You Want? : ");
													scanf("%d",&number);
															printf("\n");
														printf("==============================================================\n");
														printf("     		   YOUR MOVIE BOOKING BILL         \n");
														printf("==============================================================\n\n");
																printf("\tYour Booking Seats : %d\n",number);
																printf("\tPrice (Without gst) : ");
																totalprice = price*number;
																printf("%d",totalprice);
																printf("\n");
																gst = totalprice*18/100;
																printf("\tGst is : %d",gst);
																printf("\n");
																printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
														printf("==============================================================\n");
													break;	
										default:
											printf("Enter The Valid Choice....!!!");
									}
									break;
								case 3:
									printf("Shiddat Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 4:
									printf("Love Aaj Kal movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;			
									default:
										printf("Enter The Valid Choice....!!!");
							}
						break;
						case 3:
							printf("Horror Movie");
							printf("\n\n");
							printf("press 1 Stree 2 Movie\n");
							printf("press 2 Demonte Colony 2 Movie\n");
							printf("press 3 Nandhan Movie\n");
							printf("press 4 Dancing Village: The Curse Begins movie\n");	
							printf("\n");	
							printf("Enter The Choice Movie Name :");	
		            		scanf("%d",&number);
		            		
		            		switch(number)
		            		{
								case 1:
									printf("Stree 2 Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 2:
									printf("Demonte Colony 2 Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 3:
									printf("Nandhan Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 4:
									printf("Dancing Village: The Curse Begins Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;			
									default:
										printf("Enter The Valid Choice....!!!");
							}
						break;
						case 4:
							printf("Action Movie");
							printf("\n\n");
							printf("press 1 Bade Miyan Chote Miyan Movie\n");
							printf("press 2 Kalki 2898 AD Movie\n");
							printf("press 3 Kill Movie\n");
							printf("press 4 Chandu Champion movie\n");	
							printf("\n");	
							printf("Enter The Choice Movie Name :");	
		            		scanf("%d",&number);
		            		switch(number)
		            		{
								case 1:
									printf("Bade Miyan Chote Miyan Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 2:
									printf("Kalki 2898 AD Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 3:
									printf("Kill Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 4:
									printf("Chandu Champion Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;			
									default:
										printf("Enter The Valid Choice....!!!");
							}
						break;	
						default:
							printf("Enter The Valid Choice....!!!");
					}
			break;
			case 2:	
			printf("Tollywood");
			printf("\n\n");
				printf("press 1 Comedy Movie\n");
				printf("press 2 Romantic Movie\n");
				printf("press 3 Horror Movie\n");
				printf("press 4 Action Movie\n");				
				printf("\n");
				printf("Enter The Choice Movie Type :");	
		        scanf("%d",&number);
		            
		            switch(number)
					{
						case 1:
							printf("Comedy Movie");
							printf("\n\n");
							printf("press 1 Keedaa Cola Movie\n");
							printf("press 2 Om Bheem Bush Movie\n");
							printf("press 3 Mad Movie\n");
							printf("press 4 Premalu The movie\n");	
							printf("\n");	
							printf("Enter The Choice Movie Name :");	
		            		scanf("%d",&number);
		            		
		            		switch(number)
		            		{
								case 1:
									printf("Keedaa Cola Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 2:
									printf("Om Bheem Bush Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 3:
									printf("Mad Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 4:
									printf("Premalu movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;			
									default:
										printf("Enter The Valid Choice....!!!");
							}
						break;
						case 2:
							printf("Romantic Movie");
							printf("\n\n");
							printf("press 1 Siddharth Roy Movie\n");
							printf("press 2 Hi Nanna Do Movie\n");
							printf("press 3 Love Me if You Dare! Movie\n");
							printf("press 4 Honeymoon Express movie\n");	
							printf("\n");	
							printf("Enter The Choice Movie Name :");	
		            		scanf("%d",&number);
		            		
		            		switch(number)
		            		{
								case 1:
									printf("Siddharth Roy Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 2:
									printf("Hi Nanna Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 3:
									printf("Love Me if You Dare! Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
										case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 4:
									printf("Honeymoon Express movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;			
									default:
										printf("Enter The Valid Choice....!!!");
							}
						break;
						case 3:
							printf("Horror Movie");
							printf("\n\n");
							printf("press 1 Pindam Movie\n");
							printf("press 2 Ooru Peru Bhairavakona Movie\n");
							printf("press 3 Tantra Movie\n");
							printf("press 4 Geethanjali Malli Vachindi movie\n");	
							printf("\n");	
							printf("Enter The Choice Movie Name :");	
		            		scanf("%d",&number);
		            		
		            		switch(number)
		            		{
								case 1:
									printf("Pindam Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 2:
									printf("Ooru Peru Bhairavakona Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 3:
									printf("Tantra Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 4:
									printf("Geethanjali Malli Vachindi Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;			
									default:
										printf("Enter The Valid Choice....!!!");
							}
						break;
						case 4:
							printf("Action Movie");
							printf("\n\n");
							printf("press 1 Mr. Bachchan Movie\n");
							printf("press 2 Double iSmart Movie\n");
							printf("press 3 Maharaja Movie\n");
							printf("press 4 Gangs of Godavari movie\n");	
							printf("\n");	
							printf("Enter The Choice Movie Name :");	
		            		scanf("%d",&number);
		            		switch(number)
		            		{
								case 1:
									printf("Mr. Bachchan Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 2:
									printf("Double iSmart Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 3:
									printf("Maharaja Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 4:
									printf("Gangs of Godavari Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;			
									default:
										printf("Enter The Valid Choice....!!!");
							}
						break;	
						default:
							printf("Enter The Valid Choice....!!!");
					}
			break;
			case 3:	
			printf("Hollywood");
			printf("\n\n");
				printf("press 1 Comedy Movie\n");
				printf("press 2 Romantic Movie\n");
				printf("press 3 Horror Movie\n");
				printf("press 4 Action Movie\n");				
				printf("\n");
				printf("Enter The Choice Movie Type :");	
		        scanf("%d",&number);
		            
		            switch(number)
					{
						case 1:
							printf("Comedy Movie");
							printf("\n\n");
							printf("press 1 Lift Movie\n");
							printf("press 2 Jackpot! Movie\n");
							printf("press 3 Incoming Movie\n");
							printf("press 4 Anyone but You movie\n");	
							printf("\n");	
							printf("Enter The Choice Movie Name :");	
		            		scanf("%d",&number);
		            		
		            		switch(number)
		            		{
								case 1:
									printf("Lift Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 2:
									printf("Jackpot! Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 3:
									printf("Incoming Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 4:
									printf("Anyone but You movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;			
									default:
										printf("Enter The Valid Choice....!!!");
							}
						break;
						case 2:
							printf("Romantic Movie");
							printf("\n\n");
							printf("press 1 A Family Affair Movie\n");
							printf("press 2 The Fall Guy Do Movie\n");
							printf("press 3 Find Me Falling Movie\n");
							printf("press 4 Which Brings Me to You movie\n");	
							printf("\n");	
							printf("Enter The Choice Movie Name :");	
		            		scanf("%d",&number);
		            		
		            		switch(number)
		            		{
								case 1:
									printf("A Family Affair Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 2:
									printf("The Fall Guy Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 3:
									printf("Find Me Falling Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 4:
									printf("Which Brings Me to You movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;			
									default:
										printf("Enter The Valid Choice....!!!");
							}
						break;
						case 3:
							printf("Horror Movie");
							printf("\n\n");
							printf("press 1 The Conjuring Movie\n");
							printf("press 2 A Quiet Place 2 Movie\n");
							printf("press 3 The Exorcism Movie\n");
							printf("press 4 Abigail Movie\n");	
							printf("\n");	
							printf("Enter The Choice Movie Name :");	
		            		scanf("%d",&number);
		            		
		            		switch(number)
		            		{
								case 1:
									printf("The Conjuring Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 2:
									printf("A Quiet Place Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 3:
									printf("The Exorcism Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 4:
									printf("Abigail Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;			
									default:
										printf("Enter The Valid Choice....!!!");
							}
						break;
						case 4:
							printf("Action Movie");
							printf("\n\n");
							printf("press 1 Maharaja Movie\n");
							printf("press 2 Buddy Movie\n");
							printf("press 3 Civil War Movie\n");
							printf("press 4 Furiosa: A Mad Max Saga movie\n");	
							printf("\n");	
							printf("Enter The Choice Movie Name :");	
		            		scanf("%d",&number);
		            		switch(number)
		            		{
								case 1:
									printf("Maharaja Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 2:
									printf("Buddy Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											default:
												printf("Enter The Valid Choice....!!!");
									}
									break;
								case 3:
									printf("Civil War Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
										}
									break;
								case 4:
									printf("Furiosa: A Mad Max Saga Movie\n\n");
									printf("Bronze Seat Price 150\n");
									printf("Sliver Seat Price 200\n");
									printf("Gold Seat Price 250\n\n");				
									printf("Enter The Choice Movie Ticket Price :");	
							        scanf("%d",&price);
							        
								        switch(price)
										{
											case 150:
												printf("Bronze Seat Price 150\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;
											case 200:
												printf("Sliver Seat Price 200\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
													printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											case 250:
												printf("Gold Seat Price 250\n\n");
												printf("How Many Seats Do You Want? : ");
												scanf("%d",&number);
														printf("\n");
													printf("==============================================================\n");
													printf("     		   YOUR MOVIE BOOKING BILL         \n");
													printf("==============================================================\n\n");
															printf("\tYour Booking Seats : %d\n",number);
															printf("\tPrice (Without gst) : ");
															totalprice = price*number;
															printf("%d",totalprice);
															printf("\n");
															gst = totalprice*18/100;
															printf("\tGst is : %d",gst);
															printf("\n");
															printf("\tTotal Price (With gst) : %d \n\n",gst+totalprice);
													printf("==============================================================\n");
												break;	
											default:
												printf("Enter The Valid Choice....!!!");
										}
									break;			
									default:
										printf("Enter The Valid Choice....!!!");
							}
						break;	
						default:
							printf("Enter The Valid Choice....!!!");
					}
			break;	
			default:
				printf("Enter The Valid Choice....!!!");	
	}
}