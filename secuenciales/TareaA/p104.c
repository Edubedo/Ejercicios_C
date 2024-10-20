#include <stdio.h>

void main() {
	float terabytes,gb,mb,kb,bytes, bits;


	printf("Ingresa los TeraBytes que quieras pasar a Bits: ");
	scanf("%f", &terabytes);

	gb = terabytes * 1024;
	mb = gb * 1024;
	kb = mb * 1024;
	bytes = kb * 1024;
	bits = bytes * 8;

	printf("%f TeraBytes es igual a %f\n", terabytes, bits);

}
