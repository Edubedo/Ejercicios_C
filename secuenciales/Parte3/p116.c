#include <stdio.h>
#include <math.h>

int main() {
	float gradosSexagesimales, radianes;

	printf("Ingresa los grados sexagesimales: ");
	scanf("%f", &gradosSexagesimales);

	// 180s -> 3.1416
	// xs
	radianes = (gradosSexagesimales * 3.1416) / 180;
	
	printf("Radianes: %.3f\n", radianes);
	printf("Seno: %.3f\n", sin(radianes));
	printf("Conseno: %.3f\n", cos(radianes));
	printf("Tangente: %.3f\n", tan(radianes));
	return 0;
}
