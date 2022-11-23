#include <stdio.h>

int main(void) {
    char correctAnswers[] = {'T', 'F', 'F', 'T', 'F', 'T'};
    char studentAnswers[6];
    int i, correct = 0;

    for(i = 0; i < 6; i++) {
        printf("Enter your answer (Enter T / F): ");
        scanf(" %c", &studentAnswers[i]);
    }

    for(i = 0; i < 6; i++) {
        if(studentAnswers[i] == correctAnswers[i])
            correct++;
    }

    printf("Correct Answers: \n");
    for(i = 0; i < 6; i++) {
        printf("%c ", correctAnswers[i]);
    }
    puts("");

    printf("Student Input: \n");
    for(i = 0; i < 6; i++) {
        printf("%c ", studentAnswers[i]);
    }
    puts("");

    printf("Number of correct answer: %d\n", correct);

    return 0;

}



