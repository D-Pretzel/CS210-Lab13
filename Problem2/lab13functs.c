/** lab13functs.c
 * ===========================================================
 * Name: David Petzold
 * Section: T6/7
 * Project: Lab 13
 * Purpose: high level description of purpose of the program
 *          could be multiple lines
 * =========================================================== */

#include "lab13functs.h"

int isArmstrong(int num){
    int numDigit, sumDigit = 0;

    // Finds the sum and number of digits
    int i = 0;
    while (num > 0) {
        i = num % 10;
        sumDigit += i;
        num /= 10;
        numDigit++;
    }

    switch (numDigit) {
        case 3:
            if (sumDigit == ())
        case 2:
        default:
            printf("Not a valid number!\n");
            return 2;
            break;
    }

}