#include <stdio.h>
#include <stdlib.h>

int main(){
	//Aula 34 - Operador de unsigned(numero sem sinal).
	// %u para int
	unsigned int a = 10;
	
	printf("\ta = %u", a);
	
	unsigned int aa, bb, cc;
	
	aa = 2146483647;
	bb = 1;
	cc = bb + aa;
	
	printf("\n\taa = %u\n\tbb= %u\n\tcc = %u\n\n\n", aa, bb, cc);
	
	
}
