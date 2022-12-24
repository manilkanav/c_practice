#include <stdio.h>
#include <string.h>

int main(){

    FILE *ptr;
    char name[30];
    char attendance[8];
    int i, count;

    ptr = fopen("numbers.txt", "r");

    if(ptr == NULL){
        printf("Error\n");
        return -1;
    }

    fscanf(ptr, "%s %s", name, attendance);    
    while(!feof(ptr)) {
        printf("%s %s\n", name, attendance);
        fscanf(ptr, "%s %s", name, attendance);

        for(i = 0; i < strlen(attendance); i++) {
            if(attendance[i] == '1') {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;

}