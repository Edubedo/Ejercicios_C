#include <stdio.h>

int main() {
	for(int i = 5; i <= 80; i++) {
		(i != 80) ? printf("%i,", i) : printf("%i",i);
	}
	printf("\n");



	return 0;
}
