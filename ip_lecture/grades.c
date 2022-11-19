#include <stdio.h>
#include <assert.h>

char grades(int marks);
void test_grades();

int main(void) {
    test_grades();
}

char grades(int marks) {
    char result;

    if(marks < 0)
        result = 'X';
    
    else if(marks < 40)
        result = 'F';

    else if(marks < 60)
        result = 'C';
    
    else if (marks < 75)
        result = 'B';
    
    else if (marks <= 100)
        result = 'A';
    
    else
        result = 'X';

    return result;

}

void test_grades() {
    assert(grades(-10) == 'X');
    assert(grades(20) == 'F');
    assert(grades(45) == 'C');

    // Boundary conditions
    assert(grades(0) == 'F');
    assert(grades(39) == 'F');
    assert(grades(40) == 'C');
    assert(grades(60) == 'B');
    assert(grades(75) == 'A');
    assert(grades(100) == 'A');

    printf("All tests ran successfully!\n");
}