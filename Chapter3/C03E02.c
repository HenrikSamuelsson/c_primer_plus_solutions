/**
 * \file C03E02.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Takes an ASCII code as input and prints the corresponding character.
 * \return 0 upon successful execution.
 */
int main(void)
{
	int code;

	printf("Enter an ASCII code value: ");
	scanf("%d", &code);
	printf("This code represents the %c character.\n", code);

	return EXIT_SUCCESS;
}
