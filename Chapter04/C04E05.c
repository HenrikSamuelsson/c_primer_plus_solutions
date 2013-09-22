/**
 * \file C04E05.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * \brief Request a name and present data about the length of the name.
 * \return 0 upon successful execution.
 */
int main(void)
{
	char firstName[20], lastName[20];
	int firstLength, lastLength;

	// Get input.
	printf("Enter your first name: ");
	scanf("%s", firstName);
	printf("Enter your last name: ");
	scanf("%s", lastName);

	// Check the length of the input.
	firstLength = strlen(firstName);
	lastLength = strlen(lastName);

	// Present the result.
	printf("%s %s\n", firstName, lastName);
	printf("%*d %*d\n", firstLength, firstLength, lastLength, lastLength);

	printf("\n");

	// Present the result again in a slightly different format.
	printf("%s %s\n", firstName, lastName);
	printf("%-*d %-*d", firstLength, firstLength, lastLength, lastLength);

	return EXIT_SUCCESS;
}
