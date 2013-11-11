/**
 * \file C07E011.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ARTICHOKES_PRICE      1.25
#define BEETS_PRICE           0.65
#define CARROT_PRICE          0.89
#define DISCOUNT_PERCENTAGE   0.05
#define SHIPPING_LOW          3.50
#define SHIPPING_MEDIUM       10.00
#define SHIPPING_LARGE        8.00
#define SHIPPING_LARGE_WEIGHT 0.10

/**
 * \brief Vegetable ordering software.
 * \note TODO not finished.
 * \warning Not really a good idea in reality to use doubles when counting
 *          money because of trouble with rounding errors.
 * \return 0 upon successful execution.
 */
int main(void)
{
	char choice;
	bool orderDone, validChoice, validAmount;
	double temp;
	double artichokes = 0;
	double beets = 0;
	double carrots = 0;

	printf("***************************************************************\n");
	printf("\n");
	printf("  (a) Artichokes\n");
	printf("  (b) Beets\n");
	printf("  (c) Carrots\n");
	printf("\n");
	printf("  (q) Done ordering\n");
	printf("\n");
	printf("***************************************************************\n");
	printf("Make a choice from the menu: ");
	orderDone = false;
	while(!orderDone)
	{
		// Get a choice of vegetable from the user.
		validChoice = false;
		while(!validChoice)
		{
			choice = getchar();
			while(getchar() != '\n')
				continue;

			switch(choice)
			{
			case 'a':
			case 'A':
				printf("Enter amount of artichokes in pounds: ");
				validChoice = true;
				break;
			case 'b':
			case 'B':
				printf("Enter amount of beets in pounds: ");
				validChoice = true;
				break;
			case 'c':
			case 'C':
				printf("Enter amount of carrots in pounds: ");
				validChoice = true;
				break;
			case 'q':
			case 'Q':
				validChoice = true;
				orderDone = true;
				break;
			default:
				printf("Invalid input, please choose from one of a, b, c, or q "
						"from the menu: ");
			}
		}

		if(!orderDone)
		{
			// Get the amount of vegetables.
			while(scanf ("%lf", &temp) != 1)
			{
				printf("Please enter a number, such as 40, 3, or 2.5: ");
				while(getchar() != '\n')
					continue;
			}
			while(getchar() != '\n')
				continue;

			switch(choice)
			{
			case 'a':
			case 'A':
				artichokes = temp;
				break;
			case 'b':
			case 'B':
				beets = temp;
				break;
			case 'c':
			case 'C':
				carrots = temp;
				break;
			}
		printf("Make another choice from the menu: ");
		}
	}

	return EXIT_SUCCESS;
}
