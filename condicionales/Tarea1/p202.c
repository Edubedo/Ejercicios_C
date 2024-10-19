/*
 * Eduardo Yair Hernàndez EScobedo
 * 1D
 * Algoritmo 202
 * */

#include <stdio.h>

int main() {
	float calificacionUno, calificacionDos, calificacionTres, promedio;

	printf("Ingresa 3 calificaciones de exàmenes separadas por espacios(1-10): \n");
	scanf("%f %f %f", &calificacionUno, &calificacionDos, &calificacionTres);

 
	if((calificacionUno > 10 || calificacionUno < 0) || 
		(calificacionDos > 10 || calificacionDos < 0) || 
		(calificacionTres > 10 || calificacionTres < 0)) {
		
		printf("Error en la declaraciòn de calificaciones \n");
		return 1;
	}

	promedio = (calificacionUno + calificacionDos + calificacionTres) / 3;
	
	if(promedio >= 6){
		printf("Aprobado! \n");
	}

	return 0;
}
