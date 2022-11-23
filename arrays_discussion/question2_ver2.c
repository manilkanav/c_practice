#include <stdio.h>

int main(void) {
    float item[] = {90.0, 20.0, 55.0}, sale[3];
    int qtySold[3], i, minSaleItem;
    

    for(i = 0; i < 3; i++) {
        printf("Enter quantity sold of item %d : ", i + 1);
        scanf("%d", &qtySold[i]);

        sale[i] = item[i] * qtySold[i];
    }


    minSaleItem = 0;
    for(i = 1; i < 3; i++) {
        if(sale[minSaleItem] > sale[i]) {
             minSaleItem = i;
        }
            
    }

    printf("Products: \n");
    for(i = 0; i < 3; i++) 
        printf("%.2f, ", item[i]);
    puts("");

    printf("Quantity Sold: \n");
    for(i = 0; i < 3; i++) 
        printf("%d ", qtySold[i]);
    puts("");

    printf("Minimum income product: %d\n", minSaleItem + 1);
    return 0;
}

