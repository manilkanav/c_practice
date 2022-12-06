#include <stdio.h>
#include <math.h>
#include <assert.h>

double hypotenuse(double s1, double s2);

int main(void) {
    
    assert(hypotenuse(3.0, 4.0) == 5);
    assert(hypotenuse(5.0, 12.0) == 13);
    assert(hypotenuse(8.0, 15.0) == 17);

    printf("Program ran succesfull!\n");
    return 0;
}

double hypotenuse(double s1, double s2) {
    // (s1 * s1 + s2 * s2)
    double ans = sqrt(s1 * s1 + s2 * s2);

    return ans;
}