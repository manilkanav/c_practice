#include <stdio.h>

int main(void) {
	int qty, itemNo = 0;
	float price, total;
	
	printf("Item No: ");
	scanf("%d", &itemNo);
	
	while(itemNo != -99) {
		
		
		switch(itemNo) {
			case 1:
				price = 30.0;
				break;
				
			case 2:
				price = 45.0;
				break;
			
			case 3:
				price = 55.50;
				break;
				
			default:
				printf("Invalid item no.\n");
		}
		
		printf("Enter quantity: ");
		scanf("%d", &qty);
		
		total += price * qty;
		
		printf("Item No: ");
		scanf("%d", &itemNo);
	}
	
	printf("Total : %.2f \n", total);
	
	return 0;
}
