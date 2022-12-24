#include<stdio.h>

int main(){
    
    FILE * ptr;

    char empnum[8];
    char empname[30];
    int attendance[7];
    int i,j;

    ptr = fopen("attendance.dat" ,"w");

    if(ptr == NULL){
        printf("File does not exist!");
        return -1;
    }

    for(i =  0 ; i < 2; i++){

    printf("Enter the Employee Number :");
    scanf("%s", empnum);
    
    printf("Enter the Employee Name :");
    scanf("%s", empname);

        for(j = 0; j < 7; j++)
        {

            printf("Enter the Attendance :");
            scanf("%d", &attendance[j]);
        }
    

    fprintf(ptr, "%s %s ", empnum, empname);

        for(j = 0; j < 7; j++)
        {
            fprintf(ptr,"%d " , attendance[j]);
        }

        fprintf(ptr, "\n");

    }
}

