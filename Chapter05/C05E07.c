/**
 * \file C05E07.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

void printCube(float number);

/**
 * \brief Calculates the cube of a number.
 * \details The main function will get input from the user. This input is used
 *          in a function that calculates the cube and presents the result.
 * \return 0 upon successful execution.
 */
int main(void)
{
	float input;

	printf("Enter a number: ");
	scanf("%f", &input);
	printCube(input);

	return EXIT_SUCCESS;
}

/**
 * \brief Calculates the cube of a number and prints the result.
 * \param[in] number The number that will be cubed.
 */
void printCube(float number)
{
	printf("The cube of %f is %f.", number, number * number * number);
}
