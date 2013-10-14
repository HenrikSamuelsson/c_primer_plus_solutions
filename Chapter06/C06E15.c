/**
 * \file C06E15.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Compares the return of two different investments.
 * \return 0 upon successful execution.
 */
int main(void)
{
	const double START_VALUE = 100.0;   // Money at year 0 in dollars.
	const double SIMPLE_INTEREST = 0.10;    // Interest that Daphne gets.
	const double COMPOUND_INTEREST = 0.05;    // Interest that Deirdre gets.
	double daphnes;    // Daphnes money.
	double deirdres;    // Deirdres money.
	int years;    // Counter to keep track of the number of years passed.

	years = 0;
	daphnes = deirdres = START_VALUE;
	while(deirdres <= daphnes)
	{
		daphnes = daphnes + START_VALUE * SIMPLE_INTEREST;
		deirdres = deirdres + deirdres * COMPOUND_INTEREST;
		years++;
	}
	printf("After %d years so will Daphne have $%.2lf and Deirdre will"
			" have $%0.2lf.", years, deirdres, daphnes);

	return EXIT_SUCCESS;
}
