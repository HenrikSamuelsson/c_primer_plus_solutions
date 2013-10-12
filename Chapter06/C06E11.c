/**
 * \file C06E11.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Experiment with harmonic and alternating harmonic series.
 * \return 0 upon successful execution.
 */
int main(void)
{
	int terms, index, sign;
	double harmonic, altHarmonic;

	harmonic = 0;
	altHarmonic = 0;
	printf("Enter number of terms to use in the summations: ");
	scanf("%d", &terms);
	for(index = 1, sign = 1; index <= terms; index++, sign *= -1)
	{
		harmonic += 1.0 / index;
		altHarmonic += sign * 1.0 / index;
	}
	printf("%lf\n", harmonic);
	printf("%lf\n", altHarmonic);

	return EXIT_SUCCESS;
}
