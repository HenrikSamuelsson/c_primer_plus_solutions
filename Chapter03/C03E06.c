/**
 * \file C03E06.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Calculates number of water molecules in different amounts of water.
 * \return 0 upon successful execution.
 */
int main(void)
{
	double H2oMolMass = 3.0e-23;
	double quartMass = 950;
	double quarts, molecules;

	printf("Enter amount of water in quarts: ");
	scanf("%lf", &quarts);
	molecules = quarts * quartMass / H2oMolMass;
	printf("That amount of water holds %e molecules\n", molecules);

	return EXIT_SUCCESS;
}
