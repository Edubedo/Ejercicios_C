#include <stdio.h>

int main (){
	int i;

	for(i = 10; i <= 150; i++) {
		if(i % 2 == 0) {
			printf("%i, ", i);
		}
	}
	printf("\n");

	return 0;
}
