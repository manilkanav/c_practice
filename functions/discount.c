#include <stdio.h>


float discount_price(float amount, float rate); // prototype

int main() {
    float amount, discounted_price;


    printf("Enter amount: ");
    scanf("%f", &amount);

    if (amount > 1000)
        discounted_price = discount_price(amount, 10);
    
    else if (amount > 2000) 
        discounted_price = discount_price(amount, 20);
}

float discount_price(float amount, float rate) {
    float discounted_price;
    discounted_price = amount * (100 - rate) / 100.0;

    return discounted_price;
}