# include <stdio.h>

int main(void)
{
	int a[5],i,temp;
	
	for(i = 0; i < 5; ++i)	
	{
		printf("Enter value  : ");
		scanf("%d", &a[i]);
	}
	
	printf("Initial Values\t\t");		
	for(i = 0; i < 5; ++i)
	{
		printf("%d ",a[i]);
	}
	
	temp = a[0];
	for(i = 0; i < 4; i++)
		a[i] = a[i+1];
		a[4] = temp;
	
	printf("\nAfter Rotating\t\t");
	for(i = 0; i < 5; ++i)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
