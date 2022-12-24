#include <stdio.h>

int main() {

    FILE * ptr;
    int i,age;
    char name[30];

    ptr = fopen("numbers.txt", "w");

    if (ptr == NULL) {
        printf("Error\n");
        return -1;
    }

    fprintf(ptr, "%s %s\n", "chris", "0110001");

    return 0;

}