#include <stdio.h>
#include <assert.h>

int qualityPoints(int average); // function protoype

int main(void) 
{
    assert(qualityPoints(100) == 4);
    assert(qualityPoints(90) == 4);
    assert(qualityPoints(80) == 3);
    assert(qualityPoints(61) == 1);
    printf("Program ran successfully!\n");
    return 0;
}

int qualityPoints(int average) {

    if (average < 60) 
        return 0;
    
    if (average < 70) 
        return 1;

    if (average < 80) 
        return 2;
    
    if (average < 90)
        return 3;
    
    else
        return 4;
}