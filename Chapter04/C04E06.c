/**
 * \file C04E06.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>
#include <float.h>

/**
 * \brief Study on precision of different decimal point types.
 * \return 0 upon successful execution.
 */
int main(void)
{
	float oneThirdF = 1.0 / 3.0;
	double oneThirdD = 1.0 / 3.0;

	printf("Float version:\t");
	printf("%.4f %.12f %.16f\n", oneThirdF, oneThirdF, oneThirdF);
	printf("Double version:\t");
	printf("%.4f %.12f %.16f\n", oneThirdD, oneThirdD, oneThirdD);
	printf("\n");
	printf("FLT_DIG:%4d\n", FLT_DIG);
	printf("DBL_DIG:%4d\n", DBL_DIG);

	return EXIT_SUCCESS;
}
