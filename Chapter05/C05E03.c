/**
 * \file C05E03.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

#define DAYS_IN_A_WEEK 7

/**
 * \brief Coverts number of days to weeks and days.
 * \return 0 upon successful execution.
 */
int main(void)
{
	int days;

	printf("Enter a number of days: ");
	scanf("%d", &days);
	while (days > 0)
	{
		printf("%d days are %d weeks, %d days.\n\n",
				days, days / DAYS_IN_A_WEEK, days % DAYS_IN_A_WEEK);
		printf("Enter a number of days (enter 0 to quit): ");
		scanf("%d", &days);
	}

	return EXIT_SUCCESS;
}
