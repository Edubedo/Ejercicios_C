#include <stdio.h>

int main() {
	float moneySales, taxPercentage, taxTotal, penaltyPercentage, total;

	printf("Enter the money of the sales: ");
	scanf("%f", &moneySales);

	// moneySales <= 544 -> 8% 
	if(moneySales <= 544) taxPercentage = 8;
	// moneySales > 544 -> 4.7%
	else if(moneySales > 544) taxPercentage = 4.7;
	
	//  tax > $329 -> 6%
	taxTotal = (moneySales * taxPercentage) / 100; 

	if(taxTotal > 329) {
		penaltyPercentage = 6;
		taxPercentage = taxPercentage + 6;
	}
	else {
		penaltyPercentage = 0;
	}

	taxTotal = (moneySales * (taxPercentage)) / 100;
	total = moneySales + taxTotal;

	printf("Money sales: %f\n Penalty: %%%.2f\n Total tax:  %%%.2f\n Total to pay: %f\n ", moneySales,penaltyPercentage,  taxPercentage, total );
	

	return 0;
}
