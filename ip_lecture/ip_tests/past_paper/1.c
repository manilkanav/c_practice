#include<stdio.h>

int main()
{   
    FILE * ptr;

    int inpnum;
    int empnum;
    char empname[30];
    int attendance[7];
    int count = 0,i;

    ptr = fopen("attendance.dat", "r");
    
    printf("Enter the Employee Number :");
    scanf("%d", &inpnum);
    
    fscanf(ptr, "%d %s", &empnum, empname);
    for(i = 0; i < 7; i++) {
        fscanf(ptr, "%d", &attendance[i]);
    }

    for(i = 0; i < 7; i++) {
        printf("%d", attendance[i]);
    }
    
    while(!feof,(ptr) )
    {
        if(empnum == inpnum)
        {
            for(i = 0; i < 7; i++)
            {
                if(attendance[i] == 1) {
                    count++;
                }
            }
        }

        fscanf(ptr, "%d %s", &empnum, empname);
        for(i = 0; i < 7; i++) {
        fscanf(ptr, "%d", &attendance[i]);
        }
    }

    printf("days present: %d\n", count);

}