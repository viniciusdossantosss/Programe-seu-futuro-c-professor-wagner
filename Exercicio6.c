#include <stdio.h>
#include <stdlib.h>

int main(){
	double real, dolar, conversor;
	conversor = 5.30;
	
	printf("Digite o valor em Reais: ");
	scanf("%lf", &real);
	dolar = real * conversor;
	printf("O valor em dolar: %.2lf", dolar);
	
	return 0;
	
}
