/**
 * \file C05E01.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

#define MINUTES_PER_HOUR 60

/**
 * \brief Converts time in minutes to time in hours and minutes.
 * \return 0 upon successful execution.
 */
int main(void)
{
	int minutes;

	printf("Enter a number of minutes: ");
	scanf("%d", &minutes);
	while (minutes > 0)
	{
		printf("That is equal to %d hour(s) and %d minute(s).\n\n",
				minutes / MINUTES_PER_HOUR, minutes % MINUTES_PER_HOUR);
		printf("Enter a number of minutes (enter 0 to quit): ");
		scanf("%d", &minutes);
	}

	return EXIT_SUCCESS;
}
