#include <stdio.h>

void printStar(int n);

int main(void) {
    
    printStar(4);

    puts("\n");

    printStar(5);

    return 0;
}

void printStar(int n) {
    int i, j;

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) 
            printf("* ");
        puts("");
    }
}