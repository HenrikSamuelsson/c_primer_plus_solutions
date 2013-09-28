/**
 * \file C05E04.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

#define CM_PER_INCH 2.54
#define INCH_PER_FEET 12

/**
 * \brief Converts centimeters to feet and inches.
 * \return 0 upon successful execution.
 */
int main(void)
{
	float heightCm, heightInches, remainder;
	int feets;

	// Get input from the user.
	printf("Enter a height in centimeters: ");
	scanf("%f", &heightCm);

	while(heightCm > 0)
	{
		// Convert the height.
		heightInches = heightCm / CM_PER_INCH;
		feets = heightInches / INCH_PER_FEET;
		remainder = heightInches - feets * INCH_PER_FEET;

		// Present the result.
		printf("%.1f cm = %d feet, %.1f inches\n", heightCm, feets, remainder);

		// Get input from the user.
		printf("Enter a height in centimeters (<=0 to quit): ");
		scanf("%f", &heightCm);
	}

	printf("bye\n");

	return EXIT_SUCCESS;
}

