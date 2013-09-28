/**
 * \file C04E07.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

#define LITER_PER_GALLON 3.785
#define KM_PER_MILE 1.609


/**
 * \brief Calculates fuel consumption based on user supplied data.
 * \return 0 upon successful execution.
 */
int main(void)
{
	float miles, gallons, liters, km, milesPerGallon, litersPer100Km;

	// Get data about the fuel consumption.
	printf("Enter number of miles traveled: ");
	scanf("%f", &miles);
	printf("Enter consumption of gasoline in gallons: ");
	scanf("%f", &gallons);

	// Calculate fuel usage.
	milesPerGallon = miles / gallons;
	liters = gallons * LITER_PER_GALLON;
	km = miles * KM_PER_MILE;
	litersPer100Km = 100 * liters / km;

	// Present the result.
	printf("Miles per gallons: %0.1f\n", milesPerGallon);
	printf("Liter per 100 km: %0.1f\n", litersPer100Km);

	return EXIT_SUCCESS;
}
