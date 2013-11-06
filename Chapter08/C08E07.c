/**
 * \file C08E07.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define BASE_HOURS 40            // Hours to work before overtime starts.
#define PAY1 8.75                // A pay rate (dollar/hour).
#define PAY2 9.33                // A pay rate (dollar/hour).
#define PAY3 10.00               // A pay rate (dollar/hour).
#define PAY4 11.20               // A pay rate (dollar/hour).
#define OVER_PAY_FACTOR 1.5      // Pay gets scaled up on over time.
#define TAX_A_BREAK_POINT 300    // Max earning for lowest tax rate.
#define TAX_B_BREAK_POINT 150    // Max additional earning for tax A.
#define TAX 0.15                 // Base tax rate.
#define TAX_A 0.20               // Extra tax rate in middle income range.
#define TAX_B 0.25               // Even more tax on income above middle range.

/**
 * \brief Calculates salary and tax based on hours worked in a week.
 * \warning Not really a good idea in reality to use doubles when counting
 *          money because of trouble with rounding errors.
 * \note Ended up cheating a little when printing the menu to get the tabular
 *       format.
 * \return 0 upon successful execution.
 */
int main(void)
{
	double pay, hoursWorked, grossPay, tax, netPay;
	bool validChoice;
	char choice;
	while(1)
	{
		printf("***************************************************************"
				"**\n");
		printf("Enter the letter corresponding to the desired pay rate or "
				"action:\n");
		printf("A) $%.2f%-29sB) $%.2f/hr\n",PAY1, "/hr", PAY2);
		printf("C) $%.2f%-28sD) $%.2f/hr\n",PAY3, "/hr", PAY4);
		printf("Q) quit\n");
		printf("***************************************************************"
				"**\n");
		validChoice = false;
		while(!validChoice)
		{
			choice = getchar();
			switch(choice)
			{
			case 'A':
				pay = PAY1;
				validChoice = true;
				break;
			case 'B':
				pay = PAY2;
				validChoice = true;
				break;
			case 'C':
				pay = PAY3;
				validChoice = true;
				break;
			case 'D':
				pay = PAY4;
				validChoice = true;
				break;
			case 'Q':
				return EXIT_SUCCESS;    // End the program.
				break;
			default:
				printf("Invalid input, please choose from the options 1 to 5 "
						"in the menu.\n");
			}
			while(getchar() != '\n')
				continue;
		}

		printf("Enter number of hours worked this week: ");
		scanf ("%lf", &hoursWorked);
		while(getchar() != '\n')
					continue;

		// Calculate the gross pay.
		if(hoursWorked > BASE_HOURS)
			grossPay = pay * BASE_HOURS +
					   pay * OVER_PAY_FACTOR * (hoursWorked - BASE_HOURS);
		else
			grossPay = pay * hoursWorked;

		// Have the gross pay so can calculate the tax now.
		if(grossPay > TAX_A_BREAK_POINT + TAX_B_BREAK_POINT)
			tax = (grossPay - TAX_A_BREAK_POINT - TAX_B_BREAK_POINT) * TAX_B +
				  (TAX_A_BREAK_POINT - TAX_B_BREAK_POINT) * TAX_A +
				  TAX_A_BREAK_POINT * TAX;
		else if (grossPay > TAX_A_BREAK_POINT)
			tax = (grossPay - TAX_A_BREAK_POINT) * TAX_A +
				  TAX_A_BREAK_POINT * TAX;
		else
			tax = grossPay * TAX;

		// Have the tax and the gross pay so can calculate the net pay now.
		netPay = grossPay - tax;

		printf("Gross pay: $%.2lf\n", grossPay);
		printf("Tax: $%.2lf\n", tax);
		printf("Net pay: $%.2lf\n", netPay);
		printf("\n");

	}
}
