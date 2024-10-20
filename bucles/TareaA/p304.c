 #include <stdio.h>

int main(void) {
	int contador = 0;

	for(int i = 1; i <= 45; i++){
		(i != 45) ? printf("%i+", i) : printf("%i", i);
		contador = contador + i;
	}
	printf(" = %i", contador);

}
