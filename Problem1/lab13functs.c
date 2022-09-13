/** lab13functs.c
 * ===========================================================
 * Name: David Petzold
 * Section: T6/7
 * Project: Lab 13
 * Purpose: high level description of purpose of the program
 *          could be multiple lines
 * =========================================================== */

#include "lab13functs.h"

void printRange(int start, int final){

    if (final > start) {
        int i = start;
        while (i <= final) {
            printf("%d\n", i);
            i++;
        }
    } else {
        int j = start;
        while (j >= final) {
            printf("%d\n", j);
            j--;
        }
    }
}