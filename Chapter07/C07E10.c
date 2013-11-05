/**
 * \file C07E10.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Calculates tax based on income and marital status.
 * \warning Not really a good idea to use float numbers like double to
 *          represent money since there will be rounding errors and people
 *          tend to picky about their money.
 * \return 0 upon successful execution.
 */
int main(void) {
	const double BASE_TAX = 0.15;
	const double EXCESS_TAX = 0.28;

	const double SINGLE_BREAK = 17850;
	const double HOH_BREAK = 23900;
	const double MJ_BREAK = 29750;
	const double MS_BREAK = 14875;

	char choice;
	double income;
	double breakPoint;
	double tax;

	while (1) {
		printf("Choose your marital status from the list.\n\n");
		printf("a) Single\n");
		printf("b) Head of Household\n");
		printf("c) Married, Joint\n");
		printf("d) Married, Separate\n\n");
		printf("q) Quit program\n\n");

		choice = getchar();
		while (getchar() != '\n')
			continue;

		switch (choice) {
		case 'a':
			breakPoint = SINGLE_BREAK;
			break;
		case 'b':
			breakPoint = HOH_BREAK;
			break;
		case 'c':
			breakPoint = MJ_BREAK;
			break;
		case 'd':
			breakPoint = MS_BREAK;
			break;
		case 'q':
			return EXIT_SUCCESS;
		default:
			printf("Invalid choice please try again.\n\n");
			continue;
		}

		printf("Enter your income: ");
		scanf("%lf", &income);
		while (getchar() != '\n')
			continue;

		if (income < breakPoint)
			tax = BASE_TAX * income;
		else
			tax = BASE_TAX * breakPoint + EXCESS_TAX * (income - breakPoint);

		printf("Your tax is $%.2lf\n\n", tax);
	}
}
