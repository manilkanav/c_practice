#include <stdio.h>

int main(void) {
    FILE *f;
    int n;

    f = fopen("number.dat", "r");

    if(f == NULL) {
        printf("File does not exit\n");
        return -1;
    }

    while(!feof(f)) {
        fscanf(f, "%d", &n);
        printf("%d\n", n);
    }

    fclose(f);

    return 0;
}