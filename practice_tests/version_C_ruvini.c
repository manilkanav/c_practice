#include<stdio.h>

int main(void)
{
	int option,Npizza;
	char size,choice;
	float amount;
	
	printf("Input Pizza Option : ");
	scanf("%d", &option);
	
	if(option == 1 || option == 2 || option == 3)
	{
		printf("Size of Pizza : ");	
		scanf(" %c", &size);
		
			if(size == 'P' || size == 'M' || size == 'L')
			{
				switch(option){
					
					case 1 : 
						switch(size){
							case 'P' : 
								amount = 560;
								break;
									   
							case 'M' : 
								amount = 920;
							    break;
							      	   
							case 'L' : 
								amount = 1800;
								break;		
						}
					case 2 : 
						switch(size){
							case 'P' : 
								amount = 340;
								break;
									   
							case 'M' : 
								amount = 660;
							    break;
							      	   
							case 'L' : 
								amount = 1300;
								break;			
						}
				    case 3 : 
						switch(size){
							case 'P' : 
								amount = 760;
								break;
									   
							case 'M' : 
								amount = 1100;
							    break;
							      	   
							case 'L' : 
								amount = 2100;
								break;									
						}							
				}
				printf("Number of Pizzas : ");
				scanf("%d", &Npizza);
				
				amount *= Npizza;
				
				printf("Do you need any extra toppings (y/n) : \n");
	 			scanf(" %c",&choice);
	 		
			 	while(choice == 'y'|| choice == 'Y')
			 	
	 			{
					printf("Input your option : ");
					scanf("%d", &option);
					
					if(option == 1 || option == 2 || option == 3 || option == 4)
					{
						switch(option){
							case 1 : amount += 320 *Npizza;
							break;
							
							case 2 : amount += 140 *Npizza;
							break;
							
							case 3 : amount += 130 *Npizza;
							break;
							
							case 4 : amount += 150 *Npizza;
							break;										
					}
					
				}	
					else 
						printf("Enter valid option\n");
						
					printf("Do you need any extra toppings (y/n) : \n");
	 				scanf(" %c",&choice);		
	    		}
				
				printf("Total Price Rs : %.2f\n",amount);				
			}
		    else
				printf("---Enter valid size---\n");			
	} 
			
	else 
		printf("---Enter valid option---\n");
		
	return 0;
}
