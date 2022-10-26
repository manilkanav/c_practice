#include <stdio.h>

int main() {
    int n;

    while(1) {
        printf("Enter -1 to quit:");
        scanf("%d", &n);

        if (n == -1) break;
    }

    return 0;
}