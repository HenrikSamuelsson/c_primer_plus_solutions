/**
 * \file C08E08.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * \brief Arithmetic operations based on user input.
 *
 * \note The program should probably be broken into functions, but this topic is
 *       not introduced until the following chapter so did not do this to since it
 *       might confuse beginners in c.
 *
 * \warning Using scanf with the notANumber string is unsafe since it will
 *          cause overflow if the user enters something longer than 40 chars.
 *
 * \return 0 upon successful execution.
 */
int main(void)
{
	float in1, in2;
	char choice;
	char notANumber[40];
	bool validChoice;
	bool validSecond;

	while(1)
	{
		printf("Enter the operation of your choice:\n");
		printf("%-17s%s\n", "a. add", "s. subtract");
		printf("%-17s%s\n", "m. multiply", "d. divide");
		printf("q. quit\n");

		validChoice = false;
		while(!validChoice)
		{
			choice = getchar();
			switch(choice)
			{
			case 'a':
			case 's':
			case 'm':
			case 'd':
			case 'q':
				validChoice = true;
				break;
			default:
				printf("Invalid input, please choose one of the options a, s, "
						"m, d, or q in the menu.\n");
			}
			while(getchar() != '\n')
				continue;
		}
		if(choice == 'q')
			break;

		printf("Enter first number: ");
		while(scanf ("%f", &in1) != 1)
		{
			scanf("%s", &notANumber[0]);
			printf("%s is not an number.\n", notANumber);
			printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
		}
		while(getchar() != '\n')
			continue;

		printf("Enter second number: ");
		validSecond = false;
		while(!validSecond)
		{
			while(scanf ("%f", &in2) != 1)
			{
				scanf("%s", &notANumber[0]);
				printf("%s is not an number.\n", notANumber);
				printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
			}
			while(getchar() != '\n')
					continue;
			if(choice == 'd' && in2 == 0)
				printf("Enter a number other than 0: ");
			else
				validSecond = true;
		}
		switch(choice)
		{
		case 'a':
			printf("%g + %g = %g\n", in1, in2, in1 + in2);
			break;
		case 's':
			printf("%g - %g = %g\n", in1, in2, in1 - in2);
			break;
		case 'm':
			printf("%g * %g = %g\n", in1, in2, in1 * in2);
			break;
		case 'd':
			printf("%g / %g = %g\n", in1, in2, in1 / in2);
			break;
		}
	}
	printf("Bye.");

	return EXIT_SUCCESS;
}
