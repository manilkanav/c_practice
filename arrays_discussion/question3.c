#include <stdio.h>
#define SIZE 5

int main(void) {
    int OTHours[SIZE] = {20, 22, 25, 19, 20};
    float OTrate[SIZE], maxPayment, payment;
    int i, employee;

    for(i = 0; i < SIZE; i++) {
        printf("Enter employee %d's OT rate: ", i + 1);
        scanf("%f", &OTrate[i]);
    }

    maxPayment = 0;
    for(i = 0; i < SIZE; i++) {
        payment = OTHours[i] * OTrate[i];
        if(maxPayment < payment) {
            maxPayment = payment;
            employee = i + 1;
        }
    }

    printf("\nOTHours array\n");
    for(i = 0; i < SIZE; i++) 
        printf("%d ", OTHours[i]);
    puts("\n");

    printf("OTrate array\n");
    for(i = 0; i < SIZE; i++) 
        printf("%.2f ", OTrate[i]);
    puts("\n");

    printf("Employee who earned highest payment: %d\n", employee);

    return 0;
}