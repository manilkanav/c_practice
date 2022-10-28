#include <stdio.h>

int main(void) {
    int type, nUnits;
    float amount;

    printf("Customer Type: ");
    scanf("%d", &type);

    printf("Number of units: ");
    scanf("%d", &nUnits);

    if (nUnits <= 100)
        amount = nUnits * 10.0;
    
    else if (nUnits > 100) {
        amount = 100 * 10.0;
        amount += (nUnits - 100) * 30.0;

        if (type == 1)
            amount += amount * 0.2;
    }

    printf("Monthly charge: Rs.%.2f\n", amount);

    return 0;
}