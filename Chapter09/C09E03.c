/**
 * \file C09E03.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STOP '#'

void printBlock(char ch, int col, int row);

/**
 * \brief Entry point of a program that prints a character repeatedly.
 * \return 0 upon successful execution.
 */
int main(void)
{
	char charToPrint;
	int columns;
	int rows;

	printf("This program will print a character in a rectangular pattern in the"
			" size of your choice.\n\n");
	printf("Enter the character to be printed: ");
	while((charToPrint = getchar()) != STOP )
	{
		if (charToPrint == '\n')
			continue;
		printf("Enter width of pattern: ");
		if(scanf("%d", &columns)!= 1)
			break;
		printf("Enter height of pattern: ");
		if(scanf("%d", &rows) != 1)
			break;
		printBlock(charToPrint, columns, rows);
		printf("Enter the character to be printed (# to end quit): ");
	}

	return EXIT_SUCCESS;
}

/**
 *  \brief Prints a rectangular pattern made up of a repeatedly printed
 *         character.
 *  \param ch The character that will be used in the pattern.
 *  \param col Column width of the pattern.
 *  \param row Row width of the pattern.
 */
void printBlock(char ch, int col, int row)
{
	int colCount = col;
	while(row-- > 0)
	{
		while(colCount-- > 0)
		{
			printf("%c", ch);
		}
		colCount = col;    // Reset colCount before starting to print next row.
		printf("\n");
	}
	printf("\n");
}
