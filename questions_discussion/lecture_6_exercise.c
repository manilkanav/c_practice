#include <stdio.h>
#define SIZE 10

int main(void) {

	int counters[SIZE];
	int max = 0;
	int i;
	
	for( i = 0; i < SIZE; i++) {
		printf("> ");
		scanf("%d", &counters[i]); // (0)11 (1)12 (2) 50
		
		if (counters[i] < 10 || counters[i] > 100) {
			--i;
		}
		
		if (max < counters[i])
			max = counters[i];
	}
	
	printf("Maximum value: %d\n", max);
	
	printf("\n\n");
	for (i = 0; i < SIZE; ++i) {
		printf("counters[i] = %d\n", counters[i]);
	}
	
	return 0;
}


