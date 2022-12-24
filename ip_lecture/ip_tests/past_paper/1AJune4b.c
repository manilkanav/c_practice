#include<stdio.h>

int main()
{   
    FILE * ptr;

    char inpnum[8];
    char empnum[8];
    char empname[30];
    int attendance[7];
    int count1,count2,i;

    ptr = fopen("attendance.dat", "r");
    
    // printf("Enter the Employee Number :");
    // scanf("%s", empnum);
    
    fscanf(ptr, "%s %s", empnum, empname);
    for(i = 0; i < 7; i++) {
        fscanf(ptr, "%d", &attendance[i]);
    }

    printf("%s %s\n", empnum, empname);
    for(i = 0; i < 7; i++) {
        printf("%d ", attendance[i]);
    }

}