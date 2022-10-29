#include <stdio.h>

int main(void) {
    // Variable Declaration
    int qty, type = 0;
    float amount, discount;

    while (type != -1) { // loop until -1 entered

        printf("Enter Pizza Type    :   "); // Keyboard Input
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

        printf("Enter Quanitiy:     "); // Keyboard Input
        scanf("%d", &qty);

        // Calculations
        if (qty > 3) {
            amount = amount * (1 - discount / 100) * qty;
        }
        else {
            amount *= qty;
        } // End while

        // Output
        printf("Total Price     Rs:  %.2f\n\n", amount);


    }

    return 0;
} // End of main function 