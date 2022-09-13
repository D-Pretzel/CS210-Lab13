/** lab13-01.c
 * ===========================================================
 * Name: name, date
 * Section: your section
 * Project: assignment information
 * Purpose: high level description of purpose of the program
 *          could be multiple lines
 * =========================================================== */

#include "lab13functs.h"

int main() {
    int first, second;
    printf("Enter two integer values separated by a space: ");
    scanf("%d %d", &first, &second);

    printRange(first, second);
    return 0;
}