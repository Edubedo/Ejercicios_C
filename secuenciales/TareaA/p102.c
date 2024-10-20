#include <stdio.h>

char name[50];
void main() {
	printf("Enter name: ");
	fgets(name, 50, stdin);
	printf("Alumno %s \n", name);
}
