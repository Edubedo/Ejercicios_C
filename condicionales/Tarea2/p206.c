#include <stdio.h>

int main() {
	int horas, minutos;

	printf("Ingresa las horas(0-23)"); // 24 horas, 0:00 - 23:59
	scanf("%i", &horas);
	printf("Ingresa los minutos(0-59)"); // 60 minutos, 0-59
	scanf("%i", &minutos);

	// sumar 1 minuto
	minutos = minutos + 1;

// si esta en 60 entonces le sumamos 1 hora
	if(minutos == 60){
		minutos = 0;
		horas = horas + 1;
		if(horas== 24) {
			horas = 0;
		}
	}

	printf("Hora: %i:%i\n",horas,minutos );

	return 0;
}
