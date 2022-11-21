#include<stdio.h>
#define SIZE 10

void printArray(int arr[], int size);

int main(void)
{
	int seat[SIZE] = {0}, seatNo;
	
	printf("Pls input the seat number ( 1 - 10 ): ");
	scanf("%d", &seatNo);
	
	while(seatNo != -1)
	{
		if (seatNo < 1 || seatNo > 10) 
			printf("Sorry.Please input a valid seat number.\n\n");
		
		else
		{
			if( seat[seatNo - 1] == 1)
				printf("Sorry.The seat %d is reserved\n\n", seatNo);
			
			else
				seat[seatNo - 1] = 1;	
		}
		
		printf("Pls input the seat number ( 1 - 10 ): ");
		scanf("%d", &seatNo);	
		
	}
	puts("\n");
	
	printArray(seat, SIZE);
	
	return 0;
}

void printArray(int arr[], int size)
{
	
	int i;
	
	printf("Reserved seats are : ");
	
	for(i = 0; i < size; i++)
	{	
		if(arr[i] == 1)
			printf("S%d  ", i + 1);
	}
	
}
