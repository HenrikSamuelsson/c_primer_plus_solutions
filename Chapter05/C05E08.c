/**
 * \file C05E08.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

void temperatures(double tempFahr);

/**
 * \brief Converts user input temperatures expressed in Fahrenheit to the
 *        corresponding values in Celsius and Kelvin.
 * \return 0 upon successful execution.
 */
int main(void)
{
	double fahrIn;

	printf("Enter a temperature in Fahrenheit: ");
	while(scanf("%lf", &fahrIn) == 1)
	{
		temperatures(fahrIn);;
		printf("Enter a temperature in Fahrenheit (q to quit): ");
	}

	return EXIT_SUCCESS;
}

/**
 * \brief Takes a temperature in Fahrenheit and presents the corresponding
 * 		  values in Celsius and Kelvin.
 *
 * \param[in] tempFahr A temperature value expressed in fahrenheit.
 */
void temperatures(double tempFahr)
{
	double tempCel;
	double tempKel;

	const double celToFahrFactor = 1.8;
	const double celToFahrOffset = 32.0;
	const double celToKelOffset = 273.16;

	tempCel = (tempFahr - celToFahrOffset)/celToFahrFactor;
	tempKel = tempCel + celToKelOffset;

	printf("Fahrenheit: %.2lf\n", tempFahr);
	printf("Celsius:    %.2lf\n", tempCel);
	printf("Kelvin:     %.2lf\n", tempKel);
}
