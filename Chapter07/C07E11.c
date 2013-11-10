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
	bool validChoice;
	double artichokes = 0;
	double beets = 0;
	double carrots = 0;

	printf("***************************************************************\n");
	printf("  Choose vegetables from the menu.\n");
	printf("\n");
	printf("  (a) Artichokes\n");
	printf("  (b) Beets\n");
	printf("  (c) Carrots\n");
	printf("\n");
	printf("  (q) Done ordering\n");
	printf("\n");
	printf("***************************************************************\n");

	validChoice = false;
	while(!validChoice)
	{
		choice = getchar();
		switch(choice)
		{
		case 'a':
		case 'A':
			validChoice = true;
			break;
		case 'b':
		case 'B':
			validChoice = true;
			break;
		case 'c':
		case 'C':
			validChoice = true;
			break;
		case 'q':
		case 'Q':
			validChoice = true;
			break;
		default:
			printf("Invalid input, please choose from the options (a, b, c, or "
					"q) in the menu.\n");
			}
			while(getchar() != '\n')
					continue;
	}

	return EXIT_SUCCESS;
}
