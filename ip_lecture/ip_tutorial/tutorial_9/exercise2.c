#include <stdio.h>
#include <math.h>
#include <assert.h>

double hypotenuse(double s1, double s2);

int main(void) {
    
    assert(fabs(5.0 - hypotenuse(3, 4)) < 0.0001);
    assert(fabs(13.0 - hypotenuse(5, 12)) < 0.0001);
    assert(fabs(17.0 - hypotenuse(8, 15)) < 0.0001);

    printf("Tests ran successfully!\n");
    return 0;
}

double hypotenuse(double s1, double s2) { 
    // (s1 * s1 + s2 * s2)
    double ans = sqrt(s1 * s1 + s2 * s2);

    return ans;
}