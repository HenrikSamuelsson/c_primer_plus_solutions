/**
 * \file C11E01.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

#define LENGTH 10

void getChars(char * str, int n);

/**
 * \brief Entry point of program used to test the getChars function defined
 *        below.
 * \return 0 upon successful execution.
 */
int main(void)
{
	char input[LENGTH];

	printf("Type %d characters and press the enter key: ", LENGTH - 1);
	getChars(input, LENGTH);
	printf("%s", input);

	return EXIT_SUCCESS;
}

/**
 * \brief Fetches a number characters from input and stores them in an array.
 * \param str Pointer to an array where the input will be stored.
 * \param n The length of the array where the input will be stored.
 * \note The amount of input is n-1 since the last space in the array is used
 *       for storing a terminating null character.
 */
void getChars(char * str, int n)
{
	int i;
	for(i = 0; i < n - 1; i++)
	{
		str[i] = getchar();
	}
	str[i] = '\0';
}
