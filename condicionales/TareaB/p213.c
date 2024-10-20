#include <stdio.h>

int main() {
	char name[100];
	int performanceScore;

	printf("Name: ");
	fgets(name, 100, stdin);
	printf("Performance Score: ");
	scanf("%i", &performanceScore);

	if(performanceScore > 95) {
		printf("Name: %sPerformance Score: %i\nMessage: %s\n",name,performanceScore, "Excelent");
	}
	else if(performanceScore >= 85 & performanceScore <= 95) {
		printf("Name: %sPerformance Score: %i\nMessage: %s\n",name,performanceScore, "Good");
	}
	else if(performanceScore >= 75 & performanceScore < 85)  {
		printf("Name: %sPerformance Score: %i\nMessage: %s\n",name,performanceScore, "Enough");
	}
	else if(performanceScore < 75) {
		printf("Name: %sPerformance Score: %i\nMessage: %s\n",name,performanceScore, "Deficient");
	}
	
	
	return 0;
}
