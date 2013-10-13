/**
 * \file C06E13.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Sums up numbers entered by a user.
 * \Note The width when printing content of the arrays is set to 10. this gives
 *       a nice looking tabular format as long as the numbers aren't too big
 *       but will break down for large numbers.
 * \return 0 upon successful execution.
 */
int main(void)
{
	/** \brief Number of elements handled by the program. */
	const int MAX = 8;
	/** \brief Storage of user input. */
	double input[MAX];
	/** \brief Storage for the total sum of the input so far. */
	double total[MAX];
	/** \brief Temporal variable needed in the calculations. */
	double tmp;
	/** \brief Counter used to keep track of the progress. */
	int i;

	// Collect data from the user and calculate the total.
	printf("Enter %d numbers.\n", MAX);
	for(i = 0, tmp = 0; i < MAX; i++)
	{
		scanf("%lf", &input[i]);
		tmp = tmp + input[i];
		total[i] = tmp;
	}

	printf("Input:            ");
	for(i = 0; i < MAX; i++)
		printf("%10.2lf ", input[i]);
	printf("\n");

	printf("Cumulative total: ");
	for(i = 0; i < MAX; i++)
		printf("%10.2lf ", total[i]);
	printf("\n");

	return EXIT_SUCCESS;
}
