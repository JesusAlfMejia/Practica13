//ConverDLL.c
#ifndef __CONVERTERDLL_c__
#define __CONVERTERDLL_c__

#include <stdlib.h>
#include "ConverterDLL.h"



int asciiBinaryToInt(char* s) {
	int numTotal = 0;
	while (*s) {
		numTotal *= 2;
		if (*s == '1') numTotal += 1;
		else if (!(*s == '0' || *s == '1')) {
			return numTotal;
		}
		s++;
	}
	return numTotal;
}

//This function converts from HEX to int
//by using the formula of adding the total sum and (HEX digits * 16 to the power of the position)
// example AE the sum is (10 * 16^1) + (14*16^0) = 174
int asciiHEXToInt(char* s) {
	int tamano = 0;
	char* t = s;
	while (*t) {
		tamano++;
		t++;
		printf("t = %d\n", t);
		printf("*t = %d\n", *t);
	}
	int numTotal = 0;
	int factor = 1;
	for (; s < s + tamano; tamano--) {
		int numero = *(s + tamano - 1);
		if (numero >= '0' && numero <= '9') numTotal += (numero - '0') * factor;
		else if (numero >= 'a' && numero <= 'f') numTotal += (numero - 'a' + 10) * factor;
		else if (numero >= 'A' && numero <= 'F') numTotal += (numero - 'A' + 10) * factor;
		else {
			printf("Se encontro un caracter invalido\n");
			return numTotal;
		}
		factor *= 16;
	}
	return numTotal;
}

//uses function atof which converts from string to float
double asciiToDouble(char* s) {
	return atof(s);
}

#endif