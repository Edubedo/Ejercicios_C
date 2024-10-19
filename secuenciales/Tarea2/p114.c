/*
 * Eduardo Yair Hernandez Escobedo
 * Ejercicio p114
 *
*/
#include <stdio.h>

int main() {
	char nombreEmpleado[100];
	float tarifa, horasTrabajadas, salarioSemanal;


	printf("\tCalcular salario semanal\n");
	printf("Ingresa el nombre del empleado: ");
	fgets(nombreEmpleado, 100, stdin);

	printf("Ingresa las horas trabajadas por empleado: ");
	scanf("%f", &horasTrabajadas);

	printf("Ingresa la tarifa por hora: ");
	scanf("%f", &tarifa);

	salarioSemanal = horasTrabajadas * tarifa;

	printf("El salario semanal del empleado %s es de: $%.4f\n", nombreEmpleado, salarioSemanal);



	return 0;
}
