#include<stdio.h>

int main()
{
    char coursetype;
    int i;
    int count[3] = {0};
    float income[3] = {0};

    printf("Enter the Course type (Press N to exit) :");
    scanf(" %c", &coursetype);

    while(i < 100  && coursetype != 'n' && coursetype != 'N')
    {
        switch (coursetype)
        {
            case 'H':
            case 'h':
                count[0]++;
                income[0] += 1500;
                i++;
    
                break;

            case 'M':
            case 'm':
                count[1]++;
                income[1] += 2000;
                i++;
    
                break;
            
            case 'F':
            case 'f':
                count[2]++;
                income[2] += 2500;
                i++;
    
                break;
            
            default :
                printf("Invalid program type");
        }

        printf("\nEnter the Course type (Press N to exit) :");
        scanf(" %c", &coursetype);
    }

    printf("\nNumber of students in Hospitality management is :%d\n", count[0]);
    printf("Income for Hospitatlity Management is :%.2f\n\n", income[0]);

    printf("Number of students in Marketing is :%d\n", count[1]);
    printf("Income for Marketing is :%.2f\n\n", income[1]);

    printf("Number of students in Finance is :%d\n", count[2]);
    printf("Income for Finance is :%.2f\n\n", income[2]);


    return 0;
}