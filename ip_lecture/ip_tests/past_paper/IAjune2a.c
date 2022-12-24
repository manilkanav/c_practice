#include<stdio.h>
#include<string.h>

struct Customer{
    int accountnumber;
    char name[30];
    char transactiontype;
    float amount;
};

int main()
{   
    int i, iW, iD;
    struct Customer customers[5];
    float totalw = 0, totald = 0;
    float maxW = 0, maxD = 0;


    
    for(i = 0 ; i < 4 ; i++)
    {
        
        printf("Enter the account number :");
        scanf("%d", &customers[i].accountnumber);

        printf("Enter the customer the Name :");
        scanf("%s", customers[i].name);

        printf("Enter the transaction Type :");
        scanf(" %c", &customers[i].transactiontype);

        printf("Enter the transaction Amount :");
        scanf(" %f", &customers[i].amount);
    }

    for(i = 0; i < 4; i++)
    {
        if(customers[i].transactiontype == 'W' ||customers[i].transactiontype == 'w' ) {
            totalw += customers[i].amount;

            if(maxW < customers[i].amount) {
                maxW = customers[i].amount;
                iW = i;
            }

        }
        
        else if(customers[i].transactiontype == 'D' ||customers[i].transactiontype == 'd' )
            {   
                totald += customers[i].amount;

                if(maxD < customers[i].amount) {
                    maxD = customers[i].amount;
                    iD = i;
                }

            }

    }

    printf("Deposits: %.2f\n", totald);
    printf("Withdrawal: %.2f\n", totalw);
    printf("Maximum Deposit cutomer: %s\n", customers[iW].name);
    printf("Maximum Withdraw Customer: %s\n", customers[iD].name);

    return 0;
}