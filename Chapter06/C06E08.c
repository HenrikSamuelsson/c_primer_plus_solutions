/**
 * \file C06E08.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

double calculate(double in1, double in2);

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
		result = calculate(in1, in2);
		printf("Result = %g\n", result);
		printf("Enter next pair of numbers (enter q to quit):");
	}

	return EXIT_SUCCESS;
}

/**
 *  \brief Performs a calculation based on the input variables.
 *  \param[in] in1 Parameter used in the calculations
 *  \param[in] in1 Parameter used in the calculation.
 *  \return The result of the calculation.
 */
double calculate(double in1, double in2)
{
	return (in1 - in2) / (in1 * in2);
}
