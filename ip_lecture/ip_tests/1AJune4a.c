#include <stdio.h>

int main(void) {
    char empNo[10], empName[30];
    int i, j, attendance;
    FILE *ptr;

    ptr = fopen("attendance.dat", "w");

    if(ptr == NULL) {
        printf("File error\n");
        return -1;
    }

    for(i = 0; i < 2; i++) {
        printf("Employee No: ");
        scanf("%s", empNo);

        printf("Employee name: ");
        scanf("%s", empName);

        fprintf(ptr, "%s %s ", empNo, empName);

        for(j = 0; j < 7; j++) {
            printf("Attendande on day %d (0/1): ", j + 1);
            scanf("%d", &attendance);
            fprintf(ptr, "%d", attendance);
        }
        puts("");
        fprintf(ptr, "\n");
    }

    fclose(ptr);
}