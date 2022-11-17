// c i v i c - 5 (5 / 2) = 2
// r a r - 3 (3 / 2) = 1
// l e v e l - 5 = 2
// h a n n i h - 6 = 3

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[30];
    int i, counter;

    printf("Enter word: ");
    scanf("%29s", str);

    int n = strlen(str);
   
    for(i = 0; i < n / 2; i++) {
        if(str[i] != str[n - 1 - i]) {
            printf("Not palindrome!\n");
            break;
        }

        counter++;
    }

    if(counter == n / 2) {
        printf("Is a palindrome!\n");
    }
    
    return 0;
}