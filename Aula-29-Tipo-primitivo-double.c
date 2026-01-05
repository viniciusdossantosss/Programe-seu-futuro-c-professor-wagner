#include <stdio.h>
#include <stdlib.h>

int main(){
	// Aula 29 - O tipo primitivo double para numeros reais com precisao dupla
	
	double x = 3.141519;
	long double x1 = 3.141519;
	
	printf("\n\tValor de x: %f\n", x);
	__mingw_printf("\n\tValor de x: %Le\n", x1);
	printf("\n\tTamanho: %d\n\n", sizeof x);
	printf("\n\tTamanho: %d\n\n", sizeof x1);
	
}
