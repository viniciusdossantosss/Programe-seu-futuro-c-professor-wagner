#include <stdio.h>
#include <stdlib.h>

int main(){
	//Aula 32 - Operador de incremento ++.
	int y, x = 35;
	y = ++x; // x = x + 1 
	// Nesse caso primeiro ele incrementa e depois salva na variavel y se fosse y = x++ 
	//Primeiro salvaria o valor de x 35 na variavel y e depois incrementava 1 no x
	
	printf("\tValor de y: %d\tValor de x: %d\n\n", y, x);
}
