#include <stdio.h>
#include <string.h>

int main(void) {
    char empName[30], attendance[8];
    int i, count, empNo, input;
    FILE *ptr;

    ptr = fopen("attendance.dat", "r");

    if(ptr == NULL) {
        printf("File doest not exist\n");
        return -1;
    }

    printf("Enter employee no: ");
    scanf("%d", &input);

    fscanf(ptr, "%d %s %s", &empNo, empName, attendance);


    while(!feof(ptr)) {
        if(input == empNo) {
            for(i = 0; i < strlen(attendance); i++) {
                if(attendance[i] == '1') {
                    count++;
                }
            }
        }
        fscanf(ptr, "%d %s %s", &empNo, empName, attendance);

    }

    printf("%d\n", count);

    fclose(ptr);
}