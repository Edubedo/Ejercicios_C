#include <stdio.h>

int main() {
	int i, j, primo;

	for(i = 2; i < 500; i++) {
		primo = 1;
		for(j = 2; j < i; j++) {
			if(i % j == 0) {
				primo = 0;
				break;
			}

		}
		if(primo) {
			printf("%i\n", i);
		}
	}



	return 0;
}
