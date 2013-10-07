/**
 * \file C06E07.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Repeatedly requests a pair of numbers and performs a calculation based
 *        on the input numbers.
 * \note Does not handle 0 as input from the user.
 * \return 0 upon successful execution.
 */
int main(void)
{
	double in1, in2, result;

	printf("Enter a pair of numbers: ");
	while(scanf("%lf%lf", &in1, &in2) == 2)
	{
		result = (in1 - in2) / (in1 * in2);
		printf("Result = %g\n", result);
		printf("Enter next pair of numbers (enter q to quit):");
	}

	return EXIT_SUCCESS;
}
