/**
 * \file C04E02.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Prints a text in different formats.
 * \return 0 upon successful execution.
 */
int main(void)
{
	char name[20];

	printf("Enter your name: ");
	scanf("%s", name);
	printf("\"%s\"\n", name);    // a. Prints in double quotation marks.
	printf("\"%-20s\"\n", name); // b. Prints in a field 20 characters wide.
	printf("\"%20s\"\n", name);  // c. Left justified in 20 characters field.
	printf("\"%s   \"\n", name); // d. Adds 3 spaces at the end.

	return EXIT_SUCCESS;
}
