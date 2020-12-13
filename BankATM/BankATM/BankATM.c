#include <stdio.h>
#include <stdlib.h>

int main()
{
	int moneySizes[12] = { 20000, 10000, 5000, 2000, 1000, 500,
					200, 100, 50, 20, 10, 5 };

	int change;
	printf_s("How much is the change?\n");
	scanf_s("%d", &change);

	for (int i = 0; i < 12; i++)
	{
		int amountOfCurrentBill = change / moneySizes[i];
		if (amountOfCurrentBill > 0) 
		{
			printf_s("%d X %d Forint\n", amountOfCurrentBill, moneySizes[i]);
			change -= (amountOfCurrentBill * moneySizes[i]);

		}
	}
	printf_s("\n");

	return 0;
}
