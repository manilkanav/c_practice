#include<stdio.h>

int main(void) {
    char colors[4][4];   
    int i, j;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("Enter the color: ");
            scanf(" %c", &colors[i][j]);
        }
    }

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++){

            if( colors[i][j] == 'R') 
                printf("[%d,%d] ", i, j);
        }
        puts("");
    }

    return 0;
}