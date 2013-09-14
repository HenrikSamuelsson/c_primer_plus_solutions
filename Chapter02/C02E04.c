/**
 * \file C02E04.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

void printJolly(void);
void printNobody(void);

/**
 * \brief Prints the text of a song.
 * \return 0 upon successful execution.
 */
int main(void)
{
	printJolly();
	printJolly();
	printJolly();
	printNobody();
	return EXIT_SUCCESS;
}

/**
 * \brief Prints "For he's a jolly good fellow!".
 */
void printJolly(void)
{
	printf("For he's a jolly good fellow!\n");
}

/**
 * \brief Prints "Which nobody can deny!".
 */
void printNobody(void)
{
	printf("Which nobody can deny!\n");
}
