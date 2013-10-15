/**
 * \file C06E15.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Calculation of how long an amount of money will last, based on
 *        interest and yearly withdrawals.
 * \return 0 upon successful execution.
 */
int main(void)
{
	const double START_CAPITAL = 1.0E6;
	const double INTEREST_RATE = 0.08;
	const double YEARLY_WITHDRAWAL = 0.1E6;
	double capital;
	int yearsPassed;

	capital = START_CAPITAL;
	while(capital > 0)
	{
		capital = capital + capital * INTEREST_RATE - YEARLY_WITHDRAWAL;
		yearsPassed++;
	}
	printf("Chuckie's money is gone after %d years.", yearsPassed);

	return EXIT_SUCCESS;
}
