#include <stdio.h>

int main() {
	int i;
	float PU, C, DES, PD;


	printf("Ingresa el precio unitario del agua: ");
	scanf("%f", &PU);

	printf("Cantidad\t PU\t  Costo\t  %%D\t  Descuento\t Total a Pagar\n");
	for(i = 1; i <= 1000; i++) {

		if(i >= 100 & i <= 200) {
			PD = 5;
		}
		else if(i >= 201 & i <= 500) {
			PD = 10;
		} else {
			PD = 0;
		}

		DES = (i * PU) * (PD / 100);
		

		


		printf("%i %.2f %.2f %%%.2f %.2f %.2f\n", i, PU, (i * PU), PD, DES, ((i * PU) - DES));
	 
	}

	return 0;

}
