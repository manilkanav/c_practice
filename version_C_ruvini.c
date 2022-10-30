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
				
				choice = 'y';
	 		
			 	while(choice != 'n' && choice != 'N')
			 	
	 			{
	 				printf("Do you need any extra toppings (y/n) : ");
	 				scanf(" %c",&choice);
	 				
	 				if (choice == 'Y' || choice == 'y' || choice == 'N' || choice == 'n') {
	 					
	 					if ( choice == 'N' || choice == 'n') break;
	 					
						printf("Input your option : ");
						scanf("%d", &option);
						
						
						switch(option){
							case 1 : amount += 320 *Npizza;
							break;
							
							case 2 : amount += 140 *Npizza;
							break;
							
							case 3 : amount += 130 *Npizza;
							break;
							
							case 4 : amount += 150 *Npizza;
							break;
							
							default:
								printf("Enter valid topping option!\n");
								continue;										
						}
				}
				else
					printf("Enter valid option\n");
						
				
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
