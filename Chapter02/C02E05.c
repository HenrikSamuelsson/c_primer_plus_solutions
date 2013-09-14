/**
 * \file C02E05.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Some simple arithmetic operations in C.
 * \return 0 upon successful execution.
 */
int main(void)
{
	int toes, toesTimesTwo, toesSquared;

	toes = 10;
	toesTimesTwo = toes * 2;
	toesSquared = toes * toes;

	printf("toes = %d\n", toes);
	printf("toes times two = %d\n", toesTimesTwo);
	printf("toes squared = %d\n", toesSquared);

	return EXIT_SUCCESS;
}
