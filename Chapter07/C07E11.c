/**
 * \file C07E011.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ARTICHOKE_PRICE       1.25
#define BEET_PRICE            0.65
#define CARROT_PRICE          0.89
#define DISCOUNT_PERCENTAGE   0.05
#define MEDIUM_LIMIT          5.00
#define LARGE_LIMIT           20.00
#define SHIPPING_SMALL        3.50
#define SHIPPING_MEDIUM       10.00
#define SHIPPING_LARGE        8.00
#define SHIPPING_LARGE_FACTOR 0.10
#define DISCOUNT_LIMIT        100

/**
 * \brief Vegetable ordering software.
 * \warning Not really a good idea in reality to use doubles when counting
 *          money because of trouble with rounding errors.
 * \return 0 upon successful execution.
 */
int main(void)
{
	char choice;
	bool orderDone, validChoice, discount;
	double temp;
	double artichokesWeight = 0;
	double beetsWeight = 0;
	double carrotsWeight = 0;
	double totalWeight;
	double artichokesCost, beetsCost, carrotsCost, totalBeforeDiscount,
	       totalCostAfterDiscount, discountAmount, shipping, grandTotal;

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
			// Get the amount of the chosen vegetable.
			while(scanf ("%lf", &temp) != 1)
			{
				printf("Please enter a number, such as 40, 3, or 2.5: ");
				while(getchar() != '\n')
					continue;
			}
			while(getchar() != '\n')
				continue;

			// Store the amount chosen.
			switch(choice)
			{
			case 'a':
			case 'A':
				artichokesWeight = temp;
				break;
			case 'b':
			case 'B':
				beetsWeight = temp;
				break;
			case 'c':
			case 'C':
				carrotsWeight = temp;
				break;
			}
		printf("Make another choice from the menu: ");
		}
	}

	// User is done ordering. Calculate and present the cost of the order.
	artichokesCost = artichokesWeight * ARTICHOKE_PRICE;
	beetsCost = beetsWeight * BEET_PRICE;
	carrotsCost = carrotsWeight * CARROT_PRICE;
	totalBeforeDiscount = artichokesCost + beetsCost + carrotsCost;
	if(totalBeforeDiscount >=  DISCOUNT_LIMIT)
	{
		discount = true;
		discountAmount = DISCOUNT_PERCENTAGE * totalBeforeDiscount;
		totalCostAfterDiscount = totalBeforeDiscount - discount;
	}
	else
	{
		discount = false;
		totalCostAfterDiscount = totalBeforeDiscount;
	}
	totalWeight = artichokesWeight + beetsWeight + carrotsWeight;
	if(totalCostAfterDiscount >= LARGE_LIMIT)
	{
		shipping = SHIPPING_LARGE + SHIPPING_LARGE_FACTOR * totalWeight;
	}
	else if(totalCostAfterDiscount > MEDIUM_LIMIT)
	{
		shipping = SHIPPING_MEDIUM;
	}
	else
	{
		shipping = SHIPPING_SMALL;
	}
	grandTotal = totalCostAfterDiscount + shipping;

	printf("\nArtichokes:\n");
	printf("cost per pound  %20.2lf\n", ARTICHOKE_PRICE);
	printf("pounds ordered  %20.2lf\n", artichokesWeight);
	printf("cost            %20.2lf\n", artichokesCost);

	printf("\nBeets:\n");
	printf("cost per pound  %20.2lf\n", BEET_PRICE);
	printf("pounds ordered  %20.2lf\n", beetsWeight);
	printf("cost            %20.2lf\n", beetsCost);

	printf("\nCarrots:\n");
	printf("cost per pound  %20.2lf\n", CARROT_PRICE);
	printf("pounds ordered  %20.2lf\n", carrotsWeight);
	printf("cost            %20.2lf\n", carrotsCost);

	printf("\nTotal           %20.2lf\n", totalBeforeDiscount);
	if(discount)
	{
		printf("Discount        %20.2lf\n", -discountAmount);
	}
	printf("Shipping        %20.2lf\n", shipping);
	printf("Grand total     %20.2lf\n", grandTotal);

	return EXIT_SUCCESS;
}
