#include <stdio.h>

int main() {
	float montoVentas;

	printf("Ingresa el monto de ventas: ");
	scanf("%f", &montoVentas);

	if(montoVentas < 1540) {
	// Comision 2.8%
	printf("Comisiòn 2.8%% de $%f es: %f\n",montoVentas, (montoVentas * 2.8) / 100);
	}
	else {
	// Comisiòn 3.5%
	printf("Comisiòn 3.5%% de $%f es: %f\n",montoVentas, (montoVentas * 3.5) / 100);
	}

	return 0;
}
