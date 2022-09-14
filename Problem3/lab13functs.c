/** lab13functs.c
 * ===========================================================
 * Name: David Petzold
 * Section: T6/7
 * Project: Lab 13
 * Purpose: high level description of purpose of the program
 *          could be multiple lines
 * =========================================================== */

#include "lab13functs.h"

//Created with help from GitHub copilot
int findGCD(int num1, int num2){
    int gcd = 1;
    int i = 1;
    while (i <= num1 && i <= num2){
        if (num1 % i == 0 && num2 % i == 0){
            gcd = i;
        }
        i++;
    }
    return gcd;
}
