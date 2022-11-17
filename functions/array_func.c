#include <stdio.h>


float discountedPrice(float price); // Function prototype


int main(void) {
    float total = 1000.00;

    float discount = discountedPrice(total);
    printf("%.2f\n", discount);
    
    return 0;
}


float discountedPrice(float price) {
    float discount = price * 0.1;

    return price - discount;
}