#include <stdio.h>

int main(void) {
    int qty, type = 0;
    float amount, discount;

    while (type != -1) {
        printf("Enter Pizza Type    :   ");
        scanf("%d", &type);

        switch(type) {
            case 1:
                amount = 1000;
                discount = 10;
                break;
            
            case 2:
                amount = 1600;
                discount = 12;
                break;
            
            case 3:
                amount = 1400;
                discount = 15;
                break;

            default:
                printf("Enter valid type!!\n\n");
                continue;
        }

        printf("Enter Quanitiy:     ");
        scanf("%d", &qty);

        if (qty > 3) {
            amount = amount * (1 - (discount) / 100) * qty;
        }
        else {
            amount *= qty;
        }

        printf("Total Price     Rs:  %.2f\n\n", amount);


    }

    return 0;
}