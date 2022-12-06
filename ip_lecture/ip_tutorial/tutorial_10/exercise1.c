#include <stdio.h>

int main(void) {
    int num, n, exist = 0;
    FILE *fPtr;

    printf("Enter number: ");
    scanf("%d", &num);

    fPtr = fopen("number.dat", "r+");

    if (fPtr == NULL) {
        printf("Error opening file\n");
        return -1;
    } 
    
    
    while(!feof(fPtr)) {
        fscanf(fPtr, "%d", &n); 
        if (num == n) {
            printf("The number already exist in the file!\n");
            exist = 1;
        }
    }

    if(!exist) {
        fprintf(fPtr, " %d", num);
    }

    rewind(fPtr);    

    while(!feof(fPtr)) {
        fscanf(fPtr, "%d", &n);
        printf("%d\n", n);
    }

    fclose(fPtr);

    return 0;
}