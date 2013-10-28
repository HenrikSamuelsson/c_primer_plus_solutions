/**
 * \file C09E05.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

void largerOf(double *d1, double *d2);

/**
 * \brief Exercise that shows how a function can alter more than a single
 *        variable.
 * \return 0 upon successful execution.
 */
int main(void)
{
	double x, y;

	x = 45.45;
	y = 78.54;
	printf("TEST 1\n");
	printf("Before calling largerOf: x = %lf y = %lf\n", x, y);
	largerOf(&x, &y);
	printf("After calling largerOf: x = %lf y = %lf\n", x, y);

	x = 83.71;
	y = -23.4;
	printf("TEST 2\n");
	printf("Before calling largerOf: x = %lf y = %lf\n", x, y);
	largerOf(&x, &y);
	printf("After calling largerOf: x = %lf y = %lf\n", x, y);

	return EXIT_SUCCESS;
}

/**
 * \brief Takes the pointers of two values as and changes on of them so that
 *        both values end up being equal to the larger of the two.
 * \param[in/out] d1 The first value that will be compared to the second.
 * \param[in/out] d2 The second value that will be compared to the first.
 */
void largerOf(double *d1, double *d2)
{
	double temp = *d1 > *d2 ? *d1 : *d2;
	*d1 = *d2 = temp;
}
