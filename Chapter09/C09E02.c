/**
 * \file C09E02.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

#define CH '#'
#define I 4
#define J 13

void chline(char ch, int i, int j);

/**
 * \brief Entry point of a program used to test the function chline that is
 *        defined below.
 * \return 0 upon successful execution.
 */
int main(void)
{
	chline(CH, I, J);
	return EXIT_SUCCESS;
}

/**
 * \brief Prints a character on a line.
 * \param i Controls empty spacing at the start of the line.
 * \parew j Controls where on the line the character print shall stop.
 */
void chline(char ch, int i, int j)
{
	int c;

	for(c = 1; c < i; c++)
		printf(" ");
	for(c = i; c <= j; c++)
		printf("%c", CH);
}
