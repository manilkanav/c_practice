#include <stdio.h>
#define SIZE 3

int main(void) {
    int team1[SIZE] = {8, 3, 7};
    int team2[SIZE], i, team1Tot = 0, team2Tot = 0;

    for(i = 0; i < SIZE; i++) {
        printf("Team 2 round %d score: ", i + 1);
        scanf("%d", &team2[i]);
    }

    printf("\nteam1\n");
    for(i = 0; i < SIZE; i++) 
        printf("%d ", team1[i]);
    puts("\n");

    printf("\nteam2\n");
    for(i = 0; i < SIZE; i++) 
        printf("%d ", team2[i]);
    puts("\n");

    printf("Winners\n");
    for(i = 0; i < SIZE; i++) {
        printf("round %d: ", i + 1);
        if(team1[i] > team2[i]) {
            printf("team1\n");
            team1Tot++;
        }
        else {
            printf("team2\n");
            team2Tot++;
        }
    }

    printf("\nOverall winner: ");
    if( team1Tot > team2Tot)
        printf("team1\n");
    else
        printf("team2\n");
    
    return 0;
}