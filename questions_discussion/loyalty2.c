#include<stdio.h>

int main(void)

{
	int type;
	float amount,discount;
	
	printf("Customer Type : ");
	scanf("%d", &type);
	
	printf("Bill amount : ");
	scanf("%f", &amount);
	
	if(type == 1)
	{
		if(amount <= 2500)
		{
			discount = amount * 5 / 100;
			amount = amount - discount;
			
		}
		
		else if(amount > 2500)
		{	discount = amount * 10 / 100;
			amount = amount - discount;
		}	
						
	}
	else if(type == 2)
	{
		if(amount > 5000)
		{
			discount = amount * 10 / 100;
			amount = amount - discount;
		}
	}
	
	printf("Discount Amount : Rs.%.2f\n",discount);
	printf("Final Bill Amount : RS.%.2f",amount);
	
	return 0;
}
