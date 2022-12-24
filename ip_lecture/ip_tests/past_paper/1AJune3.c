#include <stdio.h>
#include <assert.h>

int max(int x, int y);
void test_max(void);

int main(void) {
    test_max();
    return 0;
}

int max(int x, int y) {
    return (x > y) ? y : x;
}

void test_max(void) {
    assert(max(12, 14) == 14);
    assert(max(1, 10) == 10);

    printf("Finished succesfully\n");
}