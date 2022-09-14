/** lab13-03.c
 * ===========================================================
 * Name: name, date
 * Section: your section
 * Project: assignment information
 * Purpose: high level description of purpose of the program
 *          could be multiple lines
 * =========================================================== */

#include <stdio.h>
#include "lab13functs.h"

int main() {
    int num1, num2 = 0;

    printf("Give me an integer: ");
    scanf("%d", &num1);

    printf("Give me another integer: ");
    scanf("%d", &num2);

    printf("GCD = %d\n", findGCD(num1, num2));

    return 0;
}