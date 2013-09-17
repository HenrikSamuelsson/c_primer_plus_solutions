/**
 * \file C04E01.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Requests a persons first and last name and displays the complete name.
 * \return 0 upon successful execution.
 */
int main(void)
{
	char first[50];
	char last[50];

	printf("Enter your first name: ");
	scanf("%s", first);
	printf("Enter your last name: ");
	scanf("%s", last);
	printf("%s %s\n", last, first);

	return EXIT_SUCCESS;
}
