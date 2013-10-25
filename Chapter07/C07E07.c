/**
 * \file C07E07.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

#define BASE_HOURS 40            // Hours to work before overtime starts.
#define PAY 10                   // Basic pay rate (dollar/hour).
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
 * \return 0 upon successful execution.
 */
int main(void)
{
	double hoursWorked, grossPay, tax, netPay;

	printf("Enter number of hours worked this week: ");
	scanf("%lf", &hoursWorked);

	// Calculate the gross pay.
	if(hoursWorked > BASE_HOURS)
		grossPay = PAY * BASE_HOURS +
		           PAY * OVER_PAY_FACTOR * (hoursWorked - BASE_HOURS);
	else
		grossPay = PAY * hoursWorked;

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

	return EXIT_SUCCESS;
}
