#include <stdio.h>

char prosCentrarTextoPantalla(char *texto){
	for(int i = 0; i < 12; i++) {
		printf("\n");
	}


	for(int i = 0; i < 40; i++) {
		printf(" ");
	}

	printf("%s", texto);
	
	for(int i = 0; i < 40; i++) {
		printf(" ");
	}

	for(int i = 0; i < 12; i++) {
		printf("\n");
	}
	
}


int main() {
	prosCentrarTextoPantalla("xxxxxx");
	return 0;
}
