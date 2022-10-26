#include <stdio.h>

int main(void) {

    // Variable Declaration
    char shape;
    float area, radius, length, height;

    printf("Select shape (C - Circle, S - Square, T - Triangle) [press 'q' to quit]: ");
    scanf(" %c", &shape);

    while (shape != 'q') {
        
        switch (shape) {
            
            case 'c':
            case 'C':
                printf("Enter radius: ");
                scanf("%f", &radius);

                area = 22 / 7.0 * radius * radius;
                break;
            
            case 's':
            case 'S':
                printf("Enter side length: ");
                scanf("%f", &length);

                area = length * length;
                break;
            
            case 't':
            case 'T':
                printf("Enter base length, height: ");
                scanf("%f%f", &length, &height);

                area = 1 / 2.0 * length * height;
                break;
            
            default:
                printf("Please enter a valid shape!!!\n");
        }

        printf("\n\n----- Area = %.2f -----\n\n", area);

        printf("Select shape (C - Circle, S - Square, T - Triangle) [press 'q' to quit]: ");
        scanf(" %c", &shape);
    }
    
    return 0;
}

// if (shape == 'C' || shape == 'c') 
// {
//    printf("You selected circle\n");   
// }

// else if (shape == 'S' || shape == 's')