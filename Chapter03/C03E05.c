/**
 * \file C03E05.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Requests a persons age in years and calculates the corresponding
 *        number of seconds.
 * \return 0 upon successful execution.
 */
int main(void)
{
	int ageYears, ageSeconds;

	printf("Enter your age in years: ");
	scanf("%d", &ageYears);
	ageSeconds = ageYears * 3.156e7;
	printf("You have lived (about) %d seconds.\n", ageSeconds);
	return EXIT_SUCCESS;
}
