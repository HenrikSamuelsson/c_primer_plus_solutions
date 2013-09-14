/**
 *  \file C02E06.c
 *  \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

void printSmile(void);

/**
 * \brief Prints a string a couple of times by the use of a function.
 * \return 0 upon successful execution.
 */
int main(void)
{
	printSmile();
	printSmile();
	printSmile();
	printf("\n");

	printSmile();
	printSmile();
	printf("\n");

	printSmile();
	printf("\n");

	return EXIT_SUCCESS;
}

/**
 * \brief Prints the string "Smile!".
 */
void printSmile(void)
{
	printf("Smile!");
}
