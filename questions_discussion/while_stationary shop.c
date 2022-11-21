#include<stdio.h>
int main(void)
{
	int itemNo,qty;
	float total = 0;
	
	printf("Enter Item      : ");
	scanf("%d",&itemNo);
	
	
	while(itemNo != -99)
	{
		printf("Enter Quantity  : ");
		scanf("%d",&qty);
		
		printf("\n\n");
		
		switch(itemNo)
		{	
			case 1 :
					total += qty * 30;
					break;
			case 2 :
					total += qty * 45;
					break;
			case 3 :
					total += qty * 55;
					break;
					
			default:
					printf("---Enter valid Item Number---\n");			
		}
		
		
		printf("Enter Item      : ");
		scanf("%d",&itemNo);
		
		
	}
	
	printf("Total Price To Pay Rs: %.2f\n\n",total);
	
	return 0;
}
