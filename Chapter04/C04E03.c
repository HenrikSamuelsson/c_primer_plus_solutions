/**
 * \file C04E03.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Exercise that prints numbers in different formats.
 * \return 0 upon successful execution.
 */
int main(void)
{
	float input;

	printf("Enter a decimal point number: ");
	scanf("%f", &input);
	printf("The input is %.1f or %.1e.\n", input, input);
	printf("The input is %+.3f or %.3E.\n", input, input);

	return EXIT_SUCCESS;
}
