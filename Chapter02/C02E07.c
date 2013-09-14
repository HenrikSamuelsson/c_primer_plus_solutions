/**
 * \file C02E07.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

void oneThree(void);
void two(void);

/**
 * \brief Prints a couple of strings with aid of helper functions.
 * \return 0 upon successful execution.
 */
int main(void)
{
	printf("starting now:\n");
	oneThree();
	printf("done!\n");

	return EXIT_SUCCESS;
}

/**
 * \brief Prints one two three.
 * \details Prints "one" and "three" by it self, a function is called that
 *          prints "two".
 */
void oneThree(void)
{
	printf("one\n");
	two();
	printf("three\n");
}

/**
 * \brief Prints "two".
 */
void two(void)
{
	printf("two\n");
}
