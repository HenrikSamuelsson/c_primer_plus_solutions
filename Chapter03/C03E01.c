/**
 * \file C03E01.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <fenv.h>

/**
 * \brief Example of arithmetic calculations that fails because of passing the
 *        edge regarding number sizes that the system can handle correctly.
 * \return 0 upon successful execution.
 */

int main(void) {
	int tooBigInt, raised;
	float biggestFloat = FLT_MAX;
	float smallestFloat = FLT_MIN;

	printf("The maximum value of int on this system is %d\n", INT_MAX);

	tooBigInt = INT_MAX + 1;	// Overflow!
	printf("Int overflow result: %d\n\n", tooBigInt);

	feclearexcept (FE_ALL_EXCEPT);

	printf("The biggest float on this system is %e\n", biggestFloat);
	float tooBig = FLT_MAX * 1.1f;	// Overflow!
	printf("Overflow result = %e\n\n", tooBig);

	printf("The smallest float on this system is %e\n", smallestFloat);
	float tooSmall = smallestFloat / 1e20;	// Underflow!
	printf("Underflow result = %e\n\n", tooSmall);

	raised = fetestexcept ( FE_UNDERFLOW | FE_OVERFLOW);

	if (raised & FE_OVERFLOW)
		printf("Overflow in float calculations detected!\n");

	if (raised & FE_UNDERFLOW)
		printf("Underflow in float calculations detected!\n");

	return EXIT_SUCCESS;
}
