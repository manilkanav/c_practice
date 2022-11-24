#include <stdio.h>
#define SIZE 3

struct Book {
    char bookID[10];
    char title[30];
    int nCopies;
    int nReaders;
};

int main(void) {
    struct Book books[SIZE];
    int i, popularBook, maxReaders = 0;

    for(i = 0; i < SIZE; i++) {
        printf("Book %d: \n", i + 1);

        printf(" BookID : ");
        scanf("%s", books[i].bookID);

        printf(" Title: ");
        scanf("%s", books[i].title);

        printf(" No. of copies: ");
        scanf("%d", &books[i].nCopies);

        printf(" No. of readers: ");
        scanf("%d", &books[i].nReaders);
        
        puts("");
    }

    for(i = 0; i < SIZE; i++) {
        if(books[i].nReaders > maxReaders) {
            maxReaders = books[i].nReaders;
            popularBook = i;
        }
    }

    printf("\nThe most popular Book: \n");
    printf("Name of the book: %s\n", books[popularBook].title);
    printf("Number of readers: %d\n", books[popularBook].nReaders);

    return 0;
}