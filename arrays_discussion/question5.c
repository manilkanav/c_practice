#include <stdio.h>

int main(void) {
    int boxes[4][3], volume[4] = {0};
    int i, j;

    for(i = 0; i < 4; i++) {
        printf("Box %d: \n", i + 1);

        printf(" Length: ");
        scanf("%d", &boxes[i][0]);

        printf(" Width: ");
        scanf("%d", &boxes[i][1]);

        printf(" Height: ");
        scanf("%d", &boxes[i][2]);

        puts("");
    }

    for(i = 0; i < 4; i++) {
        volume[i] = boxes[i][0];
        for(j = 1; j < 3; j++) { // Methana j eka 1 walin patan ganne ape boxes[i][0] values eka kalinma aran tiyana nisai
            volume[i] *= boxes[i][j];
        }

        printf("Volume of box %d: %d\n", i + 1, volume[i]);
    }

    return 0;
}