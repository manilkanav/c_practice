#include <stdio.h>

void initialize(int arr[], int size);

int main(void) {
	int arr[10];

	initialize(arr, 10);

	return 0;

}

void initialize(int arr[], int size) {
	for(int i = 0; i < size; i++) {
		arr[i] = 0;
	}
}
