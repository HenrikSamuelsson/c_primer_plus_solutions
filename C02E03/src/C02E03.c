/**
 * \file C02E03.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 *  \brief Converts a hard coded number of years to the corresponding number
 *         of days.
 *  \return 0 upon successful execution.
 *  \note Leap years are not handled.
 */
int main(void) {
	int ageInYears, ageInDays;

	ageInYears = 40;
	ageInDays = ageInYears * 365;

	printf("%d years equals %d days.", ageInYears, ageInDays);

	return EXIT_SUCCESS;
}
