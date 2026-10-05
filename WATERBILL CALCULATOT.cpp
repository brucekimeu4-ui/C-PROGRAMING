/*
NAME:Bruce Kimeu
REG:CT100/G/30761/26
DESCRPTION:ASIGN WEEK 3 TASK 2
*/

#include <stdio.h>

int main() {
    int units;
    float bill;

    // Ask the user for water consumption
    printf("Enter the number of water units consumed: ");
    scanf("%d", &units);

    // Calculate the water bill
    if (units <= 30) {
        bill = units * 20;
    }
    else if (units <= 60) {
        bill = units * 25;
    }
    else {
        bill = units * 30;
    }

    // Display the total bill
    printf("Total Water Bill: KES %.2f\n", bill);

    return 0;
}