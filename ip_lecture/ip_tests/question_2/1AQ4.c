#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *fptr;
    char name[30], loyNo[20], input1[30], input2[30];

    int i, exist;

    fptr = fopen("loyalty.dat", "r+");

    if(fptr == NULL) {
        printf("File does not exist\n");
        return -1;
    }

    for(i = 0; i < 5; i++) {
        printf("Enter name: ");
        scanf("%s", input1);

        printf("Enter loyalty No: ");
        scanf("%s", input2);

        fscanf(fptr, "%s %s", loyNo, name);

        while(!feof(fptr)) {
            exist = 0;
            if (!strcmp(loyNo, input2)) {
                exist = 1;
                break;
            }
            
            fscanf(fptr, "%s %s", loyNo, name);
        }

        if (!exist) {
            fprintf(fptr,"%s %s\n", input2, input1);
        }
    }

    fclose(fptr);

    return 0;
}