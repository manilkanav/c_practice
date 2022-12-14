#include <stdio.h>

int main(void) {
    float item[] = {90.0, 20.0, 55.0};
    int qtySold[3], i, minSaleItem;
    float minSale, totalSale;

    for(i = 0; i < 3; i++) {
        printf("Enter quantity sold of item %d : ", i + 1);
        scanf("%d", &qtySold[i]);
    }

    minSale = item[0] * qtySold[0];
    minSaleItem = 1;
    for(i = 1; i < 3; i++) {
        totalSale = item[i] * qtySold[i];
        if(minSale > totalSale) {
            minSale = totalSale;
            minSaleItem = i + 1;
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

    printf("Minimum income product: %d\n", minSaleItem);
    return 0;
}

