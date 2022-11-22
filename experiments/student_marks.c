#include <stdio.h>

struct Student {
    char studentID[30];
    char name[30];
    float marks[3];
};

float calcAverage(float arr[], int size);

int main(void) {
    struct Student students[3];
    int i, j;

    for(i = 0; i < 3; i++) {
        printf("Enter student ID: ");
        scanf("%29s", students[i].studentID);

        printf("Enter student name: ");
        scanf("%29s", students[i].name);

        for(j = 0; j < 3; j++) {
            printf("Enter mark %d : ", j +1);
            scanf("%f", &students[i].marks[j]);
        }
        puts("");
    }

    printf("%20s%20s\n", "Student ID", "Name");

    for(i = 0; i < 3; i++) {
        if(calcAverage(students[i].marks, 3) > 45) {
            printf("%20s%20s\n", students[i].studentID, students[i].name);
        }
    }

    return 0;
}

float calcAverage(float arr[], int size) {
    float total = 0;
    int i;
    for(i = 0; i < size; i++) {
        total += arr[i];
    }

    return total / size;
}