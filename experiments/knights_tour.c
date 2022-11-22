#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 8

int main() {
    int chessBoard[SIZE][SIZE] = {0};
    int horizontal[] = {2, 1, -1, -2, -2, -1, 1, 2};
    int vertical[] = {-1, -2, -2, -1, 1, 2, 2, 1};

    int currentRow = SIZE / 2;
    int currentColumn = SIZE / 2;

    int counter = 0;

    srand(time(0));

    while(1) {
        int moveNumber = rand() % 8;
        printf("%d\n", moveNumber);

        currentRow += vertical[moveNumber];
        currentColumn += horizontal[moveNumber];

        if (currentColumn > SIZE || currentColumn < 0 || currentRow > SIZE || currentRow < 0)
            break;
        
        if (chessBoard[currentRow][currentColumn] == 1)
            break;
        
        chessBoard[currentRow][currentColumn] = 1;
        counter++;

    }    
    printf("Total number of moves: %d\n", counter);
    return 0;

}