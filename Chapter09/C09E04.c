/**
 * \file C09E04.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

#define TEST_VALUE_1 5.0
#define TEST_VALUE_2 4.0

double harmonicMean(double in1, double in2);

/**
 * \brief Entry point of a program used to test the harmonicMean function
 *        defined below
 *
 * \return 0 upon successful execution.
 */
int main(void)
{
	printf("%lf\n", harmonicMean(TEST_VALUE_1, TEST_VALUE_2));

	return EXIT_SUCCESS;
}

/**
 * \brief Calculates the harmonic mean of two numbers.
 *
 * \warning Neither of the input parameters is allowed to be equal to 0.
 *
 * \param in1 First number to be used in the calculation.
 * \param in2 Second number to be used int the calculation.
 */
double harmonicMean(double in1, double in2)
{
	return 1 / ( ( 1/in1 + 1/in2 ) / 2);
}
