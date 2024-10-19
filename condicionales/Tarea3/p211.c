#include <stdio.h>

int main() {
	float salesRevenue, taxPercentage;

	printf("\tDetermine the local tax given the sales income: \n");
	printf("Enter the money from sales revenue: ");
	scanf("%f", &salesRevenue);

	if(salesRevenue <= 9500) taxPercentage = 3.1;
	else if((salesRevenue > 9500) & (salesRevenue < 15000)) taxPercentage = 4.5;
	else if(salesRevenue >= 15000) taxPercentage= 5;
	else return 1;

	printf("The local tax from the sales revenue($%f) is: %%%f\n", salesRevenue, taxPercentage);

	
	return 0;
} 
