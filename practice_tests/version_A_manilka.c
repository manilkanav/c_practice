#include <stdio.h>

int main(void) {
    int roomType, noDays;
    float amount, discount;
    char accomBasis, cardType;
    
    printf("Enter type of room: ");
    scanf("%d%*c", &roomType);

    while(roomType != -1) {

        if (roomType == 1 || roomType == 2 || roomType == 3) {
            printf("Enter Accomodation Basis (F/H): ");
            scanf(" %c", &accomBasis);

            if (accomBasis == 'F' || accomBasis == 'f' || accomBasis == 'H' || accomBasis == 'h') {

                if (accomBasis == 'F' || accomBasis == 'f') {
                    switch(roomType) {
                        case 1:
                            amount = 25555;
                            break;
                        case 2:
                            amount = 17500;
                            break;
                        case 3:
                            amount = 9000;
                            break;
                    }
                }
                
                else if (accomBasis == 'H' || accomBasis == 'h') {
                        switch(roomType) {
                        case 1:
                            amount = 17250;
                            break;
                        case 2:
                            amount = 12500;
                            break;
                        case 3:
                            amount = 7250;
                            break;
                    }
                }
            
                printf("Enter No of days: ");
                scanf("%d", &noDays);

                printf("Enter Reward Card Type (G/ S/ B): ");
                scanf(" %c", &cardType);
                
                if (cardType == 'G' || cardType == 'g' || cardType == 'S' || cardType == 's' || cardType == 'B' || cardType == 'b') {
                    
                    switch (cardType) {
                        case 'g':
                        case 'G':
                            discount = 12.5;
                            break;
                        
                        case 's':
                        case 'S':
                            discount = 11.5;
                            break;

                        case 'b':
                        case 'B':
                            discount = 9.5;
                            break;
                    }

                    amount *= noDays;
                    amount -= amount * discount / 100;

                    printf("Amount (Rs): %.2f\n", amount);
                }

                else {
                    printf("Invalid card type\n");
                }
                
            }
            
            else {
                printf("Enter valid basis\n");
            } 
        }

        else {
            printf("Invalid room type!\n");
        }

        printf("\nEnter type of room: ");
        scanf("%d", &roomType);
    }
}

