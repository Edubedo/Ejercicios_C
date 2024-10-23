#include <stdio.h>

int potencia(int x,int y) {
	int contador = x; // 3
	for(int i = 1; i < y; i++) {
		contador *= x; // 3 *=  3 
	}
	return contador;
}

int main() {
	int x, y;
	printf("potencia de %i a la %i: %i\n",3, 4, potencia(3,4));
	return 0;
}
