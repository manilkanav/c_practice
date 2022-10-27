#include <stdio.h>

int main(void) {
    int type = 1;

    while (type != -1) {
        printf("Enter Pizza Type    :   ");
        scanf("%d", &type);

        switch(type) {
            case 1:
                printf("type 1\n");
                break;
            
            case 2:
                printf("typ 2\n");
                break;
            
            case 3:
                printf("type 3\n");
                break;

            default:
                printf("Enter valid type\n");
        }
    }





    return 0;
}