#include <stdio.h>

int main() {
	float score1, score2, score3, average;

	printf("Enter de score 1: ");
	scanf("%f", &score1);

	printf("Enter de score 2: ");
	scanf("%f", &score2);

	printf("Enter de score 3: ");
	scanf("%f", &score3);

	average = (score1 + score2) / 2;
	
	if(average < score3) {
		printf("Improving!");
	}

	else if(score3 <= (score1 + score2 - 5) / 2) {
		printf("Getting worse");
	}

	return 0;
}
