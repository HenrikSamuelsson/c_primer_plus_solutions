/**
 * \file C03E04.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Requests a number and outputs the input in decimal and exponential
 *        format.
 * \return 0 upon successful execution.
 */
int main(void)
{
	float inputNum;

	printf("Enter a floating-point number: ");
	scanf("%f", &inputNum);
	printf("Decimal-point notation: %f\n", inputNum);
	printf("Exponential notation: %e", inputNum);

	return EXIT_SUCCESS;
}
