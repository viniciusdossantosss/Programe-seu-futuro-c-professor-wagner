#include <stdio.h>
#include <stdlib.h>

int main(){
	int segundos, minutos, horas, entrada;
	
	printf("\nDigite o valor em segundos: ");
	scanf("%d", &entrada);
	segundos = entrada % 60;
	entrada = entrada / 60;
	minutos = entrada % 60;
	horas = entrada / 60;
	printf("%d : %d : %d", horas, minutos, segundos);

	return 0;
}
