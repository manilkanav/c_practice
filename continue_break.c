#include <stdio.h>            // continue;

int main(void) {
    int i, num, count = 0;
    int arr[10] = {13, 53, 2, 1, 5, 6, 2, 23, 7, 10};  

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 0; i < 10; ++i) { // Linear Search
        if (num == arr[i]) {
            printf("yes!!\n");
            break;
        }
        count++;
    }

    if (count == 10)
        printf("Noooo\n");



  

    
}