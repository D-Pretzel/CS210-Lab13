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
    int oNum, r, n = 0;
    float result = 0.0;

    oNum = num; //Keeps num "safe"

    // Stores the number of digits in num
    for (oNum = num; oNum != 0; ++n) {
        oNum /= 10; //Divides by 10 until nubmer is 0
    }

    for (oNum = num; oNum != 0; oNum /= 10) {
        r = oNum % 10;
        result += pow(r, n);
    }

    if ((int)result == num) {
        return IS_ARMSTRONG;
    } else {
        return IS_NOT_ARMSTRONG;
    }
}