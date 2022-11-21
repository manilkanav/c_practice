#include<stdio.h>

int main(void)
{
	int type,noDays;
	char accBasis,RCtype;
	float amount,discount;
	
	printf("Enter Type of room : ");
	scanf("%d%*c",&type);
	
	while(type != -1)
	{ 	
		amount = 0;
		discount = 0;
		
		printf("Enter Accommodation Basis (F/H) : ");
		scanf("%c",&accBasis);
		
		switch(type)
	    {
	    	case 1 : 
	    		if(accBasis == 'F')
	    			amount = 25555;
	    		else if(accBasis == 'H')
	    			amount = 17250;
	    		else
				printf("Enter valid Basis\n");	
	    		break;
	    
			case 2 : 
	    		if(accBasis == 'F')
	    			amount = 17500;
	    		else if(accBasis == 'H')
	    			amount = 12250;
	    		else
				printf("Enter valid Basis\n");	
	    		break;
				
			case 3 : 
	    		if(accBasis == 'F')
	    			amount = 9000;
	    		else if(accBasis == 'H')
	    			amount = 7250;
	    		else
				printf("Enter valid Basis\n");	
	    		break;	
				
			default:
				printf("Enter valid Type\n");	
	    }
	    
	    if(amount) 
	    {
		    printf("Enter No of days : ");
		    scanf("%d",&noDays);
		    
		    printf("Enter Reward Card Type ( G, S, B ) :");
		    scanf(" %c",&RCtype);
		    
		    switch(RCtype)
		    {
		    	case 'g':
		    	case 'G':
		    		discount = 12.5;
		    		break;
		    		
		    	case 's':	
		    	case 'S':
		    		discount = 11.5;
		    		break;
				
				case 'b':		
		    	case 'B':
		    		discount = 9.5;
		    		break;	
		    		
		    	default :	
		    		printf("Enter valid Card type\n");
			}
		}
		
	    if (discount && amount)
	    {
			amount = amount - (amount * noDays * discount / 100);
		    printf("Amount(Rs) : %.2f\n\n",amount);
		}
    
	   	printf("\n\nEnter Type of room : ");
	    scanf("%d%*c",&type);   
	}
	
	return 0;
}
