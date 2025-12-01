#include <stdio.h>

#define SALESTAX .07

int main() {
    // Variables for the number of tires purchased, price,
    // a before-tax total, and a total cost with tax
    int numTires;
    float tirePrice, beforeTax, netSales;

    /* Get the number of tires purchased and price per tire. */
    printf("How many tires did you purchase? ");
    scanf("%d", &numTires);
    printf("What was the cost per tire (enter in $XX.XX format)? ");
    scanf("%f", &tirePrice);

    /* Compute the before-tax total */
    beforeTax = tirePrice * numTires;
    /* Compute the total cost with tax */
    netSales = beforeTax + (beforeTax * SALESTAX);

    printf("You spent $%.2f on your tires\n\n", netSales);

    return 0;
}
