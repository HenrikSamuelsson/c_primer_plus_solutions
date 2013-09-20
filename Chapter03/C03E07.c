/**
 * \file C03E07.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Converts centimeters to inches.
 * \return 0 upon successful execution.
 */
int main(void)
{
	float heightCm, heightInch;
	float scaleFactor = 2.54;

	printf("Enter your height in centimeters: ");
	scanf("%f", &heightCm);
	heightInch = heightCm / scaleFactor;
	printf("You are %f inches tall.", heightInch);

	return EXIT_SUCCESS;
}
